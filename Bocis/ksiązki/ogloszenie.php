<!DOCTYPE html>
<html lang="pl">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Portal ogłoszeniowy</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <div class="baner">
        <h1>Portal Ogłoszeniowy</h1>
    </div>
    <div class="panellewy">
        <h2>Kategorie ogłoszeń</h2>
        <ol>
            <li>Książki</li>
            <li>Muzyka</li>
            <li>Filmy</li>
        </ol>
        <img src="ksiazki.jpg" alt="Kupię / sprzedam książkę">
        <table>
            <tr>
                <th>Liczba ogłoszeń</th>
                <th>Cena ogłoszenia</th>
                <th>Bonus</th>
            </tr>
            <tr>
                <th>1-10</th>
                <th>1 PLN</th>
                <th rowspan="3">Subskrypcja newslettera to upust 0,20 PLN na ogłoszenie</th>
            </tr>
            <tr>
                <th>11-50</th>
                <th>0,80 PLN</th>
            </tr>
            <tr>
                <th>51 i więcej</th>
                <th>0,60 PLN</th>
            </tr>
        </table>
    </div>
    <div class="panelprawy">
        <h2>Ogłoszenia kategorii książki</h2>
        <?php 
			$con = mysqli_connect('localhost','root','','ogloszenia');
			$ask = "SELECT id, tytul, tresc from ogloszenie WHERE kategoria = 1";
			$ask1 = "SELECT telefon FROM uzytkownik inner JOIN ogloszenie On uzytkownik.id = ogloszenie.uzytkownik_id ";
			$wynik = mysqli_query($con,$ask);
			$wynik1= mysqli_query($con,$ask1);

			while ($wiersz = mysqli_fetch_row($wynik)) 
			{
				$wiersz1 = mysqli_fetch_row($wynik1);
				echo "<h3>".$wiersz[0]." ".$wiersz[1]."</h3>";
				echo "<p>".$wiersz[2]."</p>";
				echo "<p>"."Telefon kontaktowy: ".$wiersz1[0];
			}
			mysqli_close($con);
		 ?>
    </div>
    <div class="stopka">
        Portal ogłoszeniowy opracował: Adrian Kalota
    </div>
</body>

</html>