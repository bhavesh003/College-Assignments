<html>
<body>
<form method='POST'>
<input type='radio' name='o' value=1>insert an elements into stack.<br>
<input type='radio' name='o' value=2>delete an elemenet from stack.<br>
<input type='radio' name='o' value=3>insert an elements in queue.<br>
<input type='radio' name='o' value=4>delete an elemenet from queue.<br>
<input type='radio' name='o' value=5>display the contents of queue.<br>
<input type='submit' name='submit'>
</form>
</body>
</html>

<?php 
$op=$_POST['o'];
$arr=array('mayur','yash','ram','jay');

switch($op)
{
       case 1:
              echo "before inserting element : ";
              print_r($arr);
              echo "<br>";
              array_push($arr,'123');
              print_r($arr);
              break;
       case 2:
              echo "before deleting element<br>";
              print_r($arr);
              echo "<br>";
              $last_ele=array_pop($arr);
              print_r($arr);
              break;
       case 3:
              echo "before inserting element : <br>";
              print_r($arr);
              echo "<br>";
              array_unshift($arr,'10');
              print_r($arr);
              break;
       case 4:
              echo "before deleting element<br>";
              print_r($arr);
              $ele=array_shift($arr);
              echo "<br>";
              echo "delete element : ",$ele;
              echo "<br>";
              print_r($arr);         
              break;
       case 5:
              echo "the contents are :<br>";
              print_r($arr);
              break;
} 
?>















