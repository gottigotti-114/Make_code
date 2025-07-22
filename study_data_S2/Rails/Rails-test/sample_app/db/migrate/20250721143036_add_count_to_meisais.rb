class AddCountToMeisais < ActiveRecord::Migration[8.0]
  def change
    add_column :meisais, :item_count, :integer
  end
end
