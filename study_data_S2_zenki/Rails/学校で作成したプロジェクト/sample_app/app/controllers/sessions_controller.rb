class SessionsController < ApplicationController
  def new
  end
  def create
    p "---------------------"
    p params[:session][:email]

    # downcaseは小文字化
    user = User.find_by(email: params[:session][:email].downcase)
    if user && user.authenticate(params[:session][:password])
      # ユーザーにログイン
      reset_session
      log_in user
      redirect_to user
    else
      # ユーザー新規作成
      flash.now[:danger] = 'INvalid email/password combination' # 本当は正しくない
      render "new",status: :unprocessable_entity
    end
  end
  def destroy
  end
end
