<?php require "./require/index_head.php"; ?>

<?php
  //フォーム送信データの取得
  $name = $_REQUEST['name'];
  $favorite = $_REQUEST['favorite'];

  if($name == null || $favorite == null){
    die("値が未定義です。");
  }

  //データベース接続データ
  $servername = "localhost"; //サーバー名
  $username = "root";        //ユーザ名
  $password = "gotti";
  $dbname = "favorite_things";

  $conn = new mysqli($servername, $username, $password, $dbname);

  //接続エラー時の処理
  if($conn -> connect_error) {
    die("接続失敗：" . $conn->connect_error);
  }

  //Insert文の作成->(?,?)の?はプレースホルダー
  //使用構文：プリペアドステートメント->インジェクション対策、パフォーマンス向上を目的として、あらかじめSQLの構造を準備し、後から動的に挿入
  $sql = "INSERT INTO favorites (name, favorite_food) VALUES (?, ?)";
  $stmt = $conn->prepare($sql); //プリペアステートメントを作成

  if(!$stmt) {
    die("Prepare failed:error ... conn->error");
  }
  $stmt->bind_param("ss",$name, $favorite);

  //SQLの実行
  if($stmt->execute()) {
    echo "<div id='sql_message'><p>データを正常に挿入しました！</p></div>";
  }else{
    echo "<div id='sql_message'><p>データの挿入に失敗しました...エラー：" . $conn->error . "</p></div>";
  }

  //接続を閉じる
  $stmt->close();
  $conn->close();
?>

<?php require "./require/index_foot.php"; ?>