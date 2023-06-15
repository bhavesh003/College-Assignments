<html>
<body>
    <hr/>
    <form method="GET">
        <table>
            <tr>
                <td>
                    <h3>Enter first no :</h3>
                </td>
                <td><input type=text name=no1>
                </td>
            </tr>
            <tr>
                <td>
                    <h3>Enter second no :</h3>
                </td>
                <td><input type=text name=no2>
                </td>
            </tr>
            <tr>
                <td><b>Select Operation which u have to perform :</b></td>
            </tr>
            <tr>
                <td><input type=radio value="1" name=cal>Addition</td>
            </tr>
            <tr>
                <td><input type=radio value="2" name=cal>Substraction</td>
            </tr>
            <tr>
                <td><input type=radio value="3" name=cal>Multiplication</td>
            </tr>
            <tr>
                <td><input type=radio value="4" name=cal>Division</td>
            </tr>
            <tr>
                <td></td>
                <td><input type=submit name=submit value=Calculate></td>
            </tr>
        </table>
    </form>
    <?php
$no1 = $_GET['no1'];
$no2 = $_GET['no2'];
$cal = $_GET['cal'];

if ($cal == 1) {
    $add = $no1 + $no2;
    echo "<h1>addition = " . $add . "</h1>";
} else if ($cal == 2) {
    $sub = $no1 - $no2;
    echo "<h1>subtraction = " . $sub . "</h1>";
} else if ($cal == 3) {
    $mult = $no1 * $no2;
    echo "<h1>multiplication = " . $mult . "</h1>";
} else if ($cal == 4) {
    $div = $no1 / $no2;
    echo "<h1>division = " . $div . "</h1>";
}
?>
</body>
</html>