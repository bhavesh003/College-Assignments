<html>
<body>
  <form method="POST">
  Calculate the area and volume of cylinder<br><br>
  Enter the Radius : <input type='text' name='r'><br>
  Enter the Height : <input type='text' name='h'><br><br>
  <input type='submit' value='Submit'>
  </form>
  <?php
  $r=$_POST['r'];
  $h=$_POST['h'];
  define('pi','3.14');
  interface shape
    {
      function area($r,$h);
      function vol($r,$h);
    }
  class cylinder implements shape
    {
    function area($r,$h)
      {
      $area=2*pi*$r*($r+$h);
      echo 'The area of cylinder is : ';
      echo $area;
      echo "<br>";
      }
    function vol($r,$h)
      {
      $vol=pi*$r*$r*$h;
      echo 'The volume of cylinder is : ';
      echo $vol;
      echo "<br>";
      }
    }
    $c=new cylinder;
    $c->area($r,$h);
    $c->vol($r,$h);
  ?>
</body>
</html>
