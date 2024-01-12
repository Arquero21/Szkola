<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ciąg liczb</title>
</head>
<body>
    <form method="post">
        <input type="tetx" name="liczba">
        <input type="submit" name="submit">
    </form>
    <?php
    if(isset($_POST['submit'])){
        $a=$_POST['liczba'];
        $n=10;
        for(  $i=0; $i<$n; $i++ )
    {
        echo "$a ";
        $a = $a * $a;
    }
    }
    ?>
</body>
</html>