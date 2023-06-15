<html>
	<body>
		<form method="POST">
		<input type="radio" name="op" value=1>Triangle
		<input type="radio" name="op" value=2>Square
		<input type="radio" name="op" value=3>Rectangle
		<input type="radio" name="op" value=4>Circle
		<input type="submit">
		</form>
		<?php
		define("pi","3,14");
		
		interface shape
		{
			function area($r,$h);
		}
		class triangle implements shape
		{
			function area($b,$h)
			{
				return (1/2)*$b*$h;
			}
		}
		class square implements shape
		{
			function area($s,$h)
			{
				return $s*$s;
			}
		}
		class rectangle implements shape
		{
			function area($l,$h)
			{
				return $l*$h;
			}
		}
		class circle implements shape
		{
			function area($r,$h)
			{
				return pi*$r*$r;
			}
		}
		$op=$_POST["op"];
		switch($op)
		{
			case 1:
				echo"area of trianle";
				$b=4;
				$h=10;
				$n=new triangle();
				echo"area is ".$n->area($b,$h);
				break;
			case 2:
				echo"area of square";
				$s=4;
				$n=new square();
				echo"area is ".$n->area($s,$s);
				break;
			case 3:
				echo"area of rectangle";
				$l=10;
				$b=15;
				$n=new rectangle();
				echo"area is ".$n->area($l,$b);
				break;
			case 4:
				echo"area of circle";
				$r=7;
				$n=new circle();
				echo"area is ".$n->area($r,$r);
				break;
			default:
				echo"Invalid";
		}
		?>
	</body>
</html>

<!-- 1/2b*h;
s*s;
l*b;
pi*r*r;
b,h,s,l,r; -->