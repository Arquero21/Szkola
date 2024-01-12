<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>Sklep muzyczny</title>
	<link rel="stylesheet" type="text/css" href="muzyka.css">
</head>
<body>
	<div id="nagłówek">
		<h1>SKLEP MUZYCZNY</h1>
</div>
	<nav>
		<h2>NASZA OFERTA</h2>
		<ol>
			<li>Instrumenty muzyczne</li>
			<li>Sprzęt audio</li>
			<li>Płyty CD</li>
		</ol>
	</nav>
	<div id="główny">
	<?php 
		$imie=$_POST['name'];
		$nazw = $_POST['nazw'];
		$adr = $_POST['adr'];
		$tel = $_POST['tel'];
		$login = $_POST['log'];
		$passwd = $_POST['passwd'];

		$connect = mysqli_connect('localhost','root','','sklep') or die('błąd połączenia bazy danych');
		

		if(empty($imie) || empty($nazw) || empty($adr) || empty($tel))
		{
			echo "Nie podano danych użytkownika <br>";
		}
		else if (isset($imie) || isset($nazw) || isset($adr) || isset($tel))
		{
			$sql = "INSERT INTO `uzytkownicy` (`id`, `imie`, `nazwisko`, `adres`, `telefon`) VALUES (NULL, '$imie', '$nazw', '$adr', '$tel')";

			$result = mysqli_query($connect, $sql);
			echo "Konto " . $imie. " " .$nazw. " zostało zarejestrowane w sklepie muzycznym <br> ";
		}

		
		

		mysqli_close($connect);
	?>
	</div>
	<div id="stopka">
		Autor: Adrian Kalota
	</div>
</body>
</html>