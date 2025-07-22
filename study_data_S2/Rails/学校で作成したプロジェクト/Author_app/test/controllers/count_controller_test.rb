require "test_helper"

class CountControllerTest < ActionDispatch::IntegrationTest
  test "should get list" do
    get count_list_url
    assert_response :success
  end
end
