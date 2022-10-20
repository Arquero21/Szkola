<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="baner">
        <img src="zad5.png" alt="Logo lotniska" width="300px">
    </div>
    <div class="baner2">
        <h1>Przyloty</h1>
    </div>
    <div class="baner">
        <h3>przydatrne linki</h3>
        <a href="kwerendy.txt">Pobierz</a>
    </div>
    <div class="main">
        <table>
            <tr>
                <th>Czas</th>
                <th>Kierunek</th>
                <th>Numer Rejsu</th>
                <th>Status</th>
            </tr>
            <?php
			$connect = mysqli_connect("localhost", "root","","egzamin");
            $zapytanie = "SELECT czas, kierunek, nr_rejsu, status_lotu FROM przyloty ORDER BY czas";
            $qu = mysqli_query($connect,$zapytanie);
            while($linia = mysqli_fetch_row($qu)){
                echo "<tr>";
                echo "<td>".$linia[0]."</td>";
                echo "<td>".$linia[1]."</td>";
                echo "<td>".$linia[2]."</td>";
                echo "<td>".$linia[3]."</td>";
                echo "</tr>";
            }

            mysqli_close($connect);
			?>
        </table>
    </div>
    <div id="cookie"> <p>
    
        <?php

if(isset($_COOKIE['aktywacja']))
   echo "Ciasteczko istnieje <br>
   Witaj ponownie na stronie lotniska";
else
   echo "Brak ciasteczek na stronie <br>
   Witaj ponownie na stronie lotniska";
?>
    </p>
</div>
    <div class="stopka2">
        Autor: Adrian Kalota
    </div>
</body>
</html>