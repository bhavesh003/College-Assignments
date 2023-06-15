<html>
  <body>
    <?php
        $a=array(array("mayur",20,"sangamwadi"),array("jay",21,"hadapsar"));
        echo "original array : <br>";
        print_r($a);

        echo "<br><br>displaying specific element from array : <br>";
		echo $a[0][1];
        
		echo "<br><br>Elements after deletion is : <br>";
		foreach($a as $k1=>$q)
		{
			foreach($q as $k2=>$r)
            {
				if($r=="mayur")
				{
					unset($a[$k1][$k2]);
				}
            }   
		}
        print_r($a);
    ?>
  </body>
</html>