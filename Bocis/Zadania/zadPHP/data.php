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

// połączenie z bazą danych
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "dziennik";

$conn = mysqli_connect($servername, $username, $password, $dbname);
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// zapytanie o nauczycieli
$sql = "SELECT imie, nazwisko, data_urodzenia FROM nauczyciel ORDER BY data_urodzenia DESC";

$result = mysqli_query($conn, $sql);

// wyświetlenie tabeli z danymi nauczycieli
echo "<table>";
echo "<tr><th>Imię</th><th>Nazwisko</th><th>Data urodzenia</th></tr>";
if (mysqli_num_rows($result) > 0) {
    while($row = mysqli_fetch_assoc($result)) {
        echo "<tr><td>".$row['imie']."</td><td>".$row['nazwisko']."</td><td>".$row['data_urodzenia']."</td></tr>";
    }
} else {
    echo "<tr><td colspan='3'>Brak wyników.</td></tr>";
}
echo "</table>";

// zamknięcie połączenia z bazą danych
mysqli_close($conn);

?>

</body>
</html>