class MeisaiController < ApplicationController
  def index
    @meisai = Meisai.all
  end

  def new
    @meisai = Meisai.new
  end
end
