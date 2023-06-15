<html >
<body>
    <form method="POST">
        <input type="text" name="str" palceholder="Enter a string">
        <button>Submit</button>
</form>
</body>
</html>

<?php
$string=$_POST['str'];
print("The actual string is:".$string);
print("Reverse string is :".strrev($string));
?>