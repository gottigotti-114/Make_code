class StaticPagesController < ApplicationController
  def home
  end

  def help
  end

  def bar
  end

  def foo
  end

  def about
    p "-----------------------------------"
    p "This is the about page."
    p "-----------------------------------"
  end

  def contact
  end
end
