<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
// połączenie z bazą danych
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "dziennik";

$conn = mysqli_connect($servername, $username, $password, $dbname);
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// zapytanie o nazwiska i imiona uczniów z klasy 3 TI posortowanych alfabetycznie nazwiskiem
$sql = "SELECT u.nazwisko, u.imie FROM uczen u JOIN klasa k ON u.id_klasa = k.id WHERE k.oznaczenie='TI' ORDER BY u.nazwisko";

$result = mysqli_query($conn, $sql);

// wyświetlenie nazwisk i imion uczniów w postaci listy numerowanej
echo "<ol>";
if (mysqli_num_rows($result) > 0) {
    while($row = mysqli_fetch_assoc($result)) {
        echo "<li>".$row['nazwisko']." ".$row['imie']."</li>";
    }
} else {
    echo "Brak wyników.";
}
echo "</ol>";

// zamknięcie połączenia z bazą danych
mysqli_close($conn);

?>



</body>
</html>