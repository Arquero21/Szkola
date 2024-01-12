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

// zapytanie o ilość osób o imieniu kończącym się na literę "a"
$sql = "SELECT COUNT(*) as liczba FROM (
        SELECT imie FROM nauczyciel WHERE imie LIKE '%a' 
        UNION 
        SELECT imie FROM uczen WHERE imie LIKE '%a'
       ) as osoby_z_imieniem_a";

$result = mysqli_query($conn, $sql);

// wyświetlenie wyniku
if (mysqli_num_rows($result) > 0) {
    $row = mysqli_fetch_assoc($result);
    echo "Liczba osób o imieniu kończącym się na literę 'a': " . $row['liczba'];
} else {
    echo "Brak wyników.";
}

// zamknięcie połączenia z bazą danych
mysqli_close($conn);

?>

</body>
</html>