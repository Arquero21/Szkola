<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Grzybobranie</title>
    <link rel="stylesheet" href="styl5.css">
</head>
<body>
    <div class="logo">
        <a href="img/borowik.jpg"><img src="img/borowik-miniatura.jpg" alt="Grzybobranie"></a>
    </div>
    <div class="tytul">
        <h1>Idziemy na grzyby!</h1>
    </div>
    <div class="lewy">
        <?php

        $conn = new mysqli("localhost", "root", "", "dane2");
    
        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }
    
        $sql = "SELECT nazwa_pliku, potoczna FROM grzyby";  
        $result = $conn->query($sql);
    
        while($row = $result->fetch_assoc()) {
          echo '<img src="' . $row["nazwa_pliku"] . '" title="' . $row["potoczna"] . '">';
        }
    
        ?>
    </div>
    <div class="prawy">
        <h2>Grzyby jadalne</h2>
        <?php
    $sql = "SELECT nazwa, potoczna FROM `grzyby` WHERE jadalny=1"; 
    $result = $conn->query($sql);

    while($row = $result->fetch_assoc()) {
      echo "<p>" . $row["nazwa"] . "(" . $row["potoczna"] . ")</p>";
    }
    ?>
        <h2>Polecamy do sosów</h2>
        <?php
    $sql = "SELECT grzyby.nazwa, grzyby.potoczna, rodzina.nazwa FROM `grzyby` INNER JOIN rodzina ON grzyby.rodzina_id=rodzina.id WHERE grzyby.potrawy_id=1"; // zapytanie numer 2
    $result = $conn->query($sql);
    echo "<ol>";

    while($row = $result->fetch_row()) {
      echo "<li>" . $row[0] . "(" . $row[1] . "), rodzina " . $row[2] . "</li>";
    }

    echo "</ol>";

    $conn->close();
    ?>
    </div>
    <footer>
        <p>Autor: Adrian Kalota</p>
    </footer>
</body>
</html>