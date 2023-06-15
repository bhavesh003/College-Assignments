<html>
<body>
<form method="POST">
Select option: <br>
<input type="radio" name="a" value="1">
a)Display the elements of an array along with keys:<br>
<input type="radio" name="a" value="2">
b)Display the size of an array:<br>
<input type="radio" name="a" value="3">
c)Reverse the order of each elements key-value pair:<br>
<input type="radio" name="a" value="4">
d)Traverse the element in an array in random order:<br>
<input type="submit" value="submit">
</form>
</pre>
</body>
</html>


<?php
$array = array('red'=>'10', 'blue'=>'20', 'green'=>'30', 'yellow'=>'40', 'black'=>'50',);
$ch=$_POST['a'];
switch($ch)
{
case 1:foreach($array as $key=>$value)
{
echo"$key => $value.<br>";
}
break;

case 2:echo sizeof($array); 
break;

case 3:echo print_r(array_flip($array)); 
break;

case 4:echo shuffle($array);
       print_r($array); 
break;

}
?>





