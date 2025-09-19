module SessionHelper
 def login(user)
  session[:user] = user.id
 end

 def current_user
  if session[:user]
   @user ||= User.find_by(id: session[:user])
  end
 end
end
