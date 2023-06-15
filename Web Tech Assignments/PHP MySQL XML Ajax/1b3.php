<html>
<body>
	<form method="POST">
		enter num :
		<input type="text" name="n"></input><br><br>
		<input type="submit"></input><br><br>
    <?php
    $n=$_POST["n"];
    $count=0;
    for($i=2;$i<$n/2;$i++)
    {
        if($n % $i == 0)
        $count++;
        break;
    } 
    if($count==0){
    print("$n is prime number");
    }
    else{
    print("$n is not a prime number"); 
    }  
    ?>
</body>
</html>