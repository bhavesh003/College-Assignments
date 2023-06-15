<html>
	<body>
		<form method="POST">
		enter num :
		<input type="number" name="num"/>
		<input type="submit"/>
		</form>
		<?php
		$num=$_POST["num"];
		$x=0;
		while($num>1)
		{
			$r=$num%10;
			$x=($x*10)+$r;
			$num=$num/10;
		}
		while($x>1)
		{
			$a=$x%10;
			switch($a)
			{
				case 0:
					echo"zero ";
					break;
				case 1:
					echo"one ";
					break;
				case 2:
					echo"two ";
					break;
				case 3:
					echo"three ";
					break;
				case 4:
					echo"four ";
					break;
				case 5:
					echo"five ";
					break;
				case 6:
					echo"six ";
					break;
				case 7:
					echo"seven ";
					break;
				case 8:
					echo"eight ";
					break;
				case 9:
					echo"nine ";
					break;
				default:
					echo"Invalid";
			}
			$x=$x/10;
		}
		?>
	</body>
</html>