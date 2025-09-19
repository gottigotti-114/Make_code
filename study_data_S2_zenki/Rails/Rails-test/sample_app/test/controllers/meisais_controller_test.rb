require "test_helper"

class MeisaisControllerTest < ActionDispatch::IntegrationTest
  setup do
    @meisai = meisais(:one)
  end

  test "should get index" do
    get meisais_url
    assert_response :success
  end

  test "should get new" do
    get new_meisai_url
    assert_response :success
  end

  test "should create meisai" do
    assert_difference("Meisai.count") do
      post meisais_url, params: { meisai: { menu_id: @meisai.menu_id, total: @meisai.total, user_id: @meisai.user_id } }
    end

    assert_redirected_to meisai_url(Meisai.last)
  end

  test "should show meisai" do
    get meisai_url(@meisai)
    assert_response :success
  end

  test "should get edit" do
    get edit_meisai_url(@meisai)
    assert_response :success
  end

  test "should update meisai" do
    patch meisai_url(@meisai), params: { meisai: { menu_id: @meisai.menu_id, total: @meisai.total, user_id: @meisai.user_id } }
    assert_redirected_to meisai_url(@meisai)
  end

  test "should destroy meisai" do
    assert_difference("Meisai.count", -1) do
      delete meisai_url(@meisai)
    end

    assert_redirected_to meisais_url
  end
end
