class CreateMeisais < ActiveRecord::Migration[8.0]
  def change
    create_table :meisais do |t|
      t.integer :user_id
      t.integer :menu_id
      t.integer :total

      t.timestamps
    end
  end
end
