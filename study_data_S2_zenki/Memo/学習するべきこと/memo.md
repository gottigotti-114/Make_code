## rails
### paramsで
```rb
params.require(:rental).permit(:book_id, :hakusu)
```
### def createあたりで、
```rb
redirect_to "/rental/new", notice: "登録しました" のnotice
```
```rb
render :new, status: :unprocessable_entity
```
### rails testのassert_templateのとこ
```rb
assert_template "rental/new"
```
### paramsの使い方と仕組み
```rb
params: { book_id: nil, hakusu: nil}
```
### エラーメッセージの:errorや:successやunprocessable_entityなど
```rb
render :new, status: :unprocessable_entity
```

