<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Poradnia</title>
<link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="b">PORADNIA SPECJALISTYCZNA</div>


    <div class="pl">
        <h3>LEKARZE SPECJALIŚCI</h3>
        <table>
<tr>
    <th colspan="2"></td>>Poniedziałek</th>
</tr>
<tr>
    <th>Anna Kowalska</th><th>otolaryngolog</th>
</tr>
<tr>
    <th colspan="2"></tdcolspan>>Wtorek</th>
</tr>
<tr>
    <th>Jan Nowak</th><th>kardiolog</th>
</tr>
        </table>
        <h3>LISTA PACJENTÓW</h3>
        <?php 
			$connect = mysqli_connect('localhost','root','','poradnia');
			$ask = "SELECT id, imie, nazwisko, choroba FROM `pacjenci`";
			$result = mysqli_query($connect,$ask);
			while ($line=mysqli_fetch_row($result))
			{
				echo $line[0].' '.$line[1].' '.$line
				[2].' '.$line[3].'<br>';
			}

			mysqli_close($connect);
		?>
		<br><br>
		<form method="POST" action="pacjent.php">
			<label>Podaj id: <br>
				<input type="number" name="id"></label>
				<input type="submit" value="Pokaż szczegóły">
		</form>

    </div>
    <div class="pp">
<h2>KARTA PACJENTA</h2>
<p>Nie wybrano pacjenta</p>
    </div>

    <div class="s">
        <p>utworzone 0000000000</p>
        <a href="kwerendy.txt">kwerendy do pobrania</a>
    </div>
</body>
</html>