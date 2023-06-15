<html>
<body>
<form class=""  method="post">
      <input type="radio" name="rad" value="1">Build a Master Table <br><br>
      <input type="radio" name="rad" value="2">Sort all entries <br><br>
      <input type="radio" name="rad" value="3">Search an entry by Teacher's Name
      <input type="text" name="tname"> <br><br>
      <input type="radio" name="rad" value="4">Display Salary <br><br>
      <input type="submit" name="sub" value="Submit">
    </form>
  </body>
</html>
<?php
class teacher
{
  public $code,$name,$desig;
  function __construct($a,$b,$c)
  {
    $this->code=$a;
    $this->name=$b;
    $this->desig=$c;
  }
  public function display_emp()
  {
    echo'
          <td>'.$this->code.'</td>
          <td>'.$this->name.'</td>
          <td>'.$this->desig.'</td>
        ';
  }
  public function getname()
{
    return $this->name;
  }
 }
class tec_acc extends teacher
{
  public $ano,$jdate;
  function __construct($a,$b,$c,$d,$e)
  {
    parent::__construct($a,$b,$c);
    $this->ano=$d;
    $this->jdate=$e;
  }
  public function display_acc()
  {
    echo'
          <td>'.$this->ano.'</td>
          <td>'.$this->jdate.'</td>
        ';
  }
}
class tec_sal extends tec_acc
{
  public $bpay,$earns,$ded,$total;
  function __construct($a,$b,$c,$d,$e,$f,$g,$h)
  {
    parent::__construct($a,$b,$c,$d,$e);
    $this->bpay=$f;
    $this->earns=$g;
    $this->ded=$h;
    $this->total=$this->bpay + $this->earns - $this->ded;
  }
  public function display_sal()
  {
    echo'
          <td>'.$this->bpay.'</td>
          <td>'.$this->earns.'</td>
          <td>'.$this->ded.'</td>
          <td>'.$this->total.'</td>
        ';
  }
}
$tec[0]=new tec_sal('A923B','Ravindra','Staff','10001','21/09/2011','20000','5000','3000');
$tec[1]=new tec_sal('A823B','Kiran','vic p','10002','22/09/2011','25000','5000','3000');
$tec[2]=new tec_sal('A723B','Sudhir','Analyst','10003','23/09/2011','22000','5000','3000');
$tec[3]=new tec_sal('A623B','Mahesh','Organiser','10004','24/09/2011','21000','5000','3000');
$tec[4]=new tec_sal('A523B','Ak','cleark','10005','25/09/2011','30000','5000','3000');
$tec[5]=new tec_sal('A423B','Ravi','Staff','10006','26/09/2011','20000','5000','3000');
$tec[6]=new tec_sal('A323B','Vashali','Analyst','10007','27/09/2011','21000','5000','3000');
$tec[7]=new tec_sal('A223B','Mahi','Organiser','10008','28/09/2011','21000','5000','3000');
$tec[8]=new tec_sal('A123B','Karna','Staff','10009','29/09/2011','20000','5000','3000');
$tec[9]=new tec_sal('A023B','Suraj','Staff','10010','30/09/2011','20000','5000','3000');

$ch=$_POST['rad'];
$tname=$_POST['tname'];
$flag=0;
function mastertable($tec)
{
  echo '<table border="1" width="100%">
                  <tr>
                    <th>Code</th>
                    <th>Name</th>
                    <th>Designation</th>
                    <th>Ac No</th>
                    <th>Join date</th>
                    <th>Basic Pay</th>
                    <th>Earnings</th>
                    <th>Deduction</th>
                    <th>Total Salary</th>
                  </tr>';

            for($i=0;$i<10;$i++)
            {
              echo '<tr>';
              $tec[$i]->display_emp();
              $tec[$i]->display_acc();
              $tec[$i]->display_sal();
              echo '</tr>';
            }
            echo '</table>';
}
switch($ch)
{
  case 1:  
            mastertable($tec);
            break;
 
    case 2: echo 'Sorting w.r.t Teacher Code <br><br>';
            function srt($a,$b)
            {
              return strcmp($a->code,$b->code);
            }
            usort($tec,"srt");
            mastertable($tec);
            break;

    case 3: echo "Searching for Teacher $tname .....<br><br>";
            for($i=0;$i<10;$i++)
            {
              $temp=$tec[$i]->getname();
              if($temp==$tname)
              {
                $flag=1;
                break;
              }
            }
            if($flag==0)
            {
              echo "Not Found<br>";
            }
            else
            {
              echo "Found in the records<br>";
            }
            break;
 
    case 4: echo "Displaying Salary of all Employees .... <br><br>";
            echo '<table border="1" width="100%">
                  <tr>
                    <th>Employee Name</th>
                    <th>Basic Pay</th>
                    <th>Earnings</th>
                    <th>Deduction</th>
                    <th>Total Salary</th>
                  </tr>';
            for($i=0;$i<10;$i++)
            {
              echo '<tr>
                    <td>'.$tec[$i]->getname().'</td>
                    ';
              $tec[$i]->display_sal();
            }
            break;
}
?>
