require "application_system_test_case"

class MeisaisTest < ApplicationSystemTestCase
  setup do
    @meisai = meisais(:one)
  end

  test "visiting the index" do
    visit meisais_url
    assert_selector "h1", text: "Meisais"
  end

  test "should create meisai" do
    visit meisais_url
    click_on "New meisai"

    fill_in "Menu", with: @meisai.menu_id
    fill_in "Total", with: @meisai.total
    fill_in "User", with: @meisai.user_id
    click_on "Create Meisai"

    assert_text "Meisai was successfully created"
    click_on "Back"
  end

  test "should update Meisai" do
    visit meisai_url(@meisai)
    click_on "Edit this meisai", match: :first

    fill_in "Menu", with: @meisai.menu_id
    fill_in "Total", with: @meisai.total
    fill_in "User", with: @meisai.user_id
    click_on "Update Meisai"

    assert_text "Meisai was successfully updated"
    click_on "Back"
  end

  test "should destroy Meisai" do
    visit meisai_url(@meisai)
    click_on "Destroy this meisai", match: :first

    assert_text "Meisai was successfully destroyed"
  end
end
