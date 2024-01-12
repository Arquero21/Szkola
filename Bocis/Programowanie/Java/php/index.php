<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<form method="post">
<input name="liczba" type="text" />
<input type="submit" name="submit" />

</form>
<?php
if(isset($_POST['submit'])){
    $n=$_POST['liczba'];
    if($n%2==0){
        echo "Parzysta";
    }else{
        echo "Nieparzysta";
    }
  }
  

?>
</body>
</html>