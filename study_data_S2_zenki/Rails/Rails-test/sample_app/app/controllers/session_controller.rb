class SessionController < ApplicationController
  include SessionHelper
  def new
    @user = User.new
  end

  def create
    user = User.new(user_params)
    "-----------------------"
    p user
    "-----------------------"
    if user && user.authenticate(params[:session])
      reset_session
      login user
      redirect_to root_path
    else
      render :new , status: :unprocessable_entity
    end

  end

private
  def user_params
    params.require(:user).permit(:name, :email, :password)
  end
end
