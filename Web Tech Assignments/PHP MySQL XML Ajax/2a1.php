<html>
    <body>
        <form method="POST">
        <Input type="number" name="num" placeholder="Enter a number">
        <button>Submit</button>
    </form>
    <?php
    $n=$_POST['num'];
    fact($n);
    echo"Factorial of a given number is :".fact($n);
    function fact($n)
    {
        $ans=1;
        for($i=$n;$i>=1;$i--)
        {     
            $ans=$ans*$i;
        }
        return $ans;
    }
        ?>
    </body>
</html>