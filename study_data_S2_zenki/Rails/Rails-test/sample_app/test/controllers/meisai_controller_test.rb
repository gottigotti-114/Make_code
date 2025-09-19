require "test_helper"

class MeisaiControllerTest < ActionDispatch::IntegrationTest
  test "should get index" do
    get meisai_index_url
    assert_response :success
  end

  test "should get new" do
    get meisai_new_url
    assert_response :success
  end
end
