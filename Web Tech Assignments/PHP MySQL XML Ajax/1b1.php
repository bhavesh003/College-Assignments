<html>
    <body>
        <?php
            $a=500;
            $b=200;
            $c=100;
            if ($a>$b && $a>$c)
                echo ("max value is ".$a);
            elseif ($b>$a && $b>$c)
                echo ("max value is ".$b);
            else 
                echo ("max value is ".$c);
        ?>
    </body>
</html>