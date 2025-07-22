class CountController < ApplicationController
  def list
    @book = Book.all
    @author = Author.all
    
    lists = Struct.new(:name, :count)
    @list = []
    @author.each do |a|
      cnt = 0
      @book.each do |b|
        if a.id == b.author_id
          cnt += 1
        end
      end
      @list << lists[a.name,cnt]
    end
    @list
  end
end
