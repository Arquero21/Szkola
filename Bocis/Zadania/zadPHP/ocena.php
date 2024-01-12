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

// wykonanie polecenia SQL do zwiększenia wartości ocen o 1
$sql = "UPDATE ocena SET ocena = ocena + 1";
$result = mysqli_query($conn, $sql);

if ($result) {
    echo "Wszystkie oceny zostały zaktualizowane o 1.";
} else {
    echo "Wystąpił błąd podczas aktualizowania ocen: " . mysqli_error($conn);
}

// zamknięcie połączenia z bazą danych
mysqli_close($conn);

?>

</body>
</html>