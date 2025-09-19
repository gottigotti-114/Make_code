require "./Bit"
require "./Display"

class Tool
  def initialize(display)
    @display = display
    @now = @display.arr[0][0]
  end

  # ---------------コマンドを正規表現でキャッチする-------------------
  def command(text)
    # =======現在の要素地点を決める（例：now10,10）============
    if text =~ /now\d{1,3},\d{1,3}/
      match_data1 = text.match(/now\d{1,3},\d{1,3}/)
      x = match_data1[0].match(/now\d{1,3}/)
      y = match_data1[0].match(/,\d{1,3}/)

      x = x[0].match(/\d{1,3}/)
      y = y[0].match(/\d{1,3}/)

      new_xy(x[0],y[0])
    end
    # =====右に指定した回数分のマスを変更する（例：right10）=====
    if text =~ /(^right|\sright)\d{1,3}/
      match_data2 = text.match(/right\d{1,3}/)
      num = match_data2[0].match(/\d{1,3}/)
      if !@now.change?
        @now.change
      end
      num[0].to_i.times do
        @prev = @now
        @now = access_right(@now)
        # もしもアクセスした要素がnilだったらアクセス前の要素をnowとする
        if @now == nil
          @now = @prev
        end
        # もしもすでにONだったらチェンジしない
        if !@now.change?
          @now.change
        end
      end
    end

    # =====左に指定した回数分のマスを変更する（例：left10）=====
    if text =~ /(^left|\sleft)\d{1,3}/
      match_data3 = text.match(/left\d{1,3}/)
      num2 = match_data3[0].match(/\d{1,3}/)

      if !@now.change?
        @now.change
      end

      num2[0].to_i.times do
        @prev = @now
        @now = access_left(@now)
        if @now == nil
          @now = @prev
        end
        if !@now.change?
          @now.change
        end
      end
    end

    # =====上に指定した回数分のマスを変更する（例：up10）=====
    if text =~ /(^up|\sup)\d{1,3}/
      match_data4 = text.match(/up\d{1,3}/)
      num3 = match_data4[0].match(/\d{1,3}/)

      if !@now.change?
        @now.change
      end
      num3[0].to_i.times do
        @prev = @now
        @now = access_up(@now)
        if @now == nil
          @now = @prev
        end
        if !@now.change?
          @now.change
        end
      end
    end

    # =====下に指定した回数分のマスを変更する（例：down10）=====
    if text =~ /(^down|\sdown)\d{1,3}/
      match_data5 = text.match(/down\d{1,3}/)
      num4 = match_data5[0].match(/\d{1,3}/)

      if !@now.change?
        @now.change
      end

      num4[0].to_i.times do
        @prev = @now
        @now = access_down(@now)
        if @now == nil
          @now = @prev
        end
        if !@now.change?
          @now.change
        end
      end
    end

    if text =~ /rightup\d{1,3}/
      match_data6 = text.match(/rightup\d{1,3}/)
      num5 = match_data6[0].match(/\d{1,3}/)

      if !@now.change?
        @now.change
      end

      num5[0].to_i.times do
        @prev = @now
        @now = access_right_up(@now)
        if @now == nil
          @now = @prev
        end
        if !@now.change?
          @now.change
        end
      end
    end

    if text =~ /rightdown\d{1,3}/
      match_data7 = text.match(/rightdown\d{1,3}/)
      num6 = match_data7[0].match(/\d{1,3}/)

      if !@now.change?
        @now.change
      end

      num6[0].to_i.times do
        @prev = @now
        @now = access_right_down(@now)
        if @now == nil
          @now = @prev
        end
        if !@now.change?
          @now.change
        end
      end
    end

    if text =~ /leftup\d{1,3}/
      match_data8 = text.match(/leftup\d{1,3}/)
      num7 = match_data8[0].match(/\d{1,3}/)

      if !@now.change?
        @now.change
      end

      num7[0].to_i.times do
        @prev = @now
        @now = access_left_up(@now)
        if @now == nil
          @now = @prev
        end
        if !@now.change?
          @now.change
        end
      end
    end

    if text =~ /rightdown\d{1,3}/
      match_data9 = text.match(/rightdown\d{1,3}/)
      num8 = match_data9[0].match(/\d{1,3}/)

      if !@now.change?
        @now.change
      end

      num8[0].to_i.times do
        @prev = @now
        @now = access_right_down(@now)
        if @now == nil
          @now = @prev
        end
        if !@now.change?
          @now.change
        end
      end
    end



  end

  # 現在アクセスしている要素を変更・新規現在アクセスいている要素
  def new_xy(x,y)
    p x
    p y
    @now = @display.arr[y.to_i][x.to_i]
  end

  # 現在アクセスしている要素を返す
  def access_now
    return @now
  end

  # 引数（要素）の下の要素を返す
  def access_down(r)
    xy = access_xy(r)
    return @display.arr[(xy[1])+1][(xy[0])]
  end

  # 引数（要素）の上の要素を返す
  def access_up(r)
    xy = access_xy(r)
    return @display.arr[(xy[1])-1][(xy[0])]
  end

  # 引数（要素）の右の要素を返す
  def access_right(r)
    xy = access_xy(r)
    return @display.arr[(xy[1])][((xy[0])+1)]
  end

  # 引数（要素）の左の要素を返す
  def access_left(r)
    xy = access_xy(r)
    return @display.arr[(xy[1])][((xy[0])-1)]
  end

  # 引数（要素）の左斜め上の要素を返す
  def access_left_up(r)
    return access_up(access_left(r))
  end

  # 引数（要素）の右斜め上の要素を返す
  def access_right_up(r)
    return access_up(access_right(r))
  end

  # 引数（要素）の左斜め下の要素を返す
  def access_left_down(r)
    return access_down(access_left(r))
  end

  # 引数（要素）の右斜め下の要素を返す
  def access_right_down(r)
    return access_down(access_right(r))
  end

  # ===================== 指定した要素のx軸とy軸を返す =====================
  def access_xy(r)
    # x軸とy軸をそれぞれカウントする
    x = 0
    y = -1
    # breakするためのチェックポイント
    break_flag = false

    @display.arr.each do |record|
      # もしもbreakできるならbreakする
      if break_flag
        break
      end
      # x軸（添え字）を0にする
      y += 1
      x = -1
      record.each do |row|
        # もしもbreakできるならbreakする
        if break_flag
          break
        end

        # x軸を+1カウント
        x += 1
        # もしも同じ要素を見つけたらbreakする準備をする
        
        if row.my_number == r.my_number
          break_flag = true
        end
      end
    end
    return [x,y]
  end

end

#display = Display.new(10,10)
#tool = Tool.new(display)

#a = tool.access_xy(display.arr[1][1])
#puts display.arr[1][1].my_number
#p a
        
