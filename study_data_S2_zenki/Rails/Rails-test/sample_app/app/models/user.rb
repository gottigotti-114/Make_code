class User < ApplicationRecord
 has_many :meisai
 has_secure_password

 validates :name, presence: true
 validates :password, presence: true
 validates :email, presence: true
 validates :password, format: { with: /.+@(\w{5,}|\d{3,}\.(com|jp))/}
 validates :email, uniqueness: true
end
