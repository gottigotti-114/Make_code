require "test_helper"

class UsersLoginTest < ActionDispatch::IntegrationTest
  test "should access into login_path" do
    get login_path
    assert_template "sessions/new"
    post login_path, params:{session: {email: "", password: ""}}
    assert_template 'sessions/new'
    assert_response :unprocessable_entity
    assert_not flash.empty?
    get root_path
    assert flash.empty?
  end

end
