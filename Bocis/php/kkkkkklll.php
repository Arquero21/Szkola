<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form>
        <input type="text" name="liczba">
        <input type="submit" name="submit">
    </form>
    <?php
    if($_POST){
        $liczba = $liczba['liczba'];
        if(($liczba)>0){
            echo "$liczba jes dodatnia";
        }else if(($liczba)<0){
            echo "$liczba jest ujemna";
        }
    }
</body>
</html>