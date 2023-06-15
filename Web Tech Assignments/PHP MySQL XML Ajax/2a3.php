<html>
</head>
<body>
    <form method="POST">
        <input type="text" name="string">
        <button>Submit</button>
    </form>
</body>
</html>
<?php
$str=$_POST['string'];
palin($str);
function palin($str)
{
    if(strrev($str)==$str)
    echo" string is Palindrom";
    else
    echo"String is not Palindrom.";   
}
?>