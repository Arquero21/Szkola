<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $n=10;
    for($i=1;$i<=$n;$i++){
        for($j=1;$j<=(1*$n)-1;$j++){
            if($j>=$n-($i-1) && $j<=$n+($i-1)){
            echo "*        ";
        }else{
            echo "&nbsp;&nbsp;";
        }
    }
        echo '</br>';
    
    }
    ?>
</body>
</html>