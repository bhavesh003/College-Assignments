<html>
<body>
<form method="POST">

<center>   <h2>Fill Employee Details : </h2>
<table>
<tr>  <td>Enter Employee No :</td>        <td><input type=text name=e_no></td>           </tr>
<tr>  <td>Enter Employee Name :</td>    <td><input type=text name=e_nm></td>     </tr>
<tr>  <td>Enter Address :</td>                  <td><input type=text name=add></td>       </tr>
<tr>  <td>Enter Phone :</td>                     <td><input type=text name=ph></td>         </tr>
<tr>  <td>Enter Salary :</td>                     <td><input type=text name=sal></td>        </tr>
<tr>  <td>Enter Department no :</td>       <td><input type=text name=d_no></td>     </tr>
<tr>  <td>Enter Department name :</td>  <td><input type=text name=d_nm></td>    </tr>
<tr>  <td>Enter Location :</td>                  <td><input type=text name=loc></td>        </tr>
<tr>  <td></td>                                           <td><input type=submit value=OK></td>   </tr>
</table>
</center>

</form>



<?php
            $e_no   =   $_GET['e_no'];
            $e_name   =   $_GET['e_nm'];
            $add   =   $_GET['add'];
            $ph   =   $_GET['ph'];
            $sal   =   $_GET['sal'];
            $d_no   =   $_GET['d_no'];
            $d_nm   =   $_GET['d_nm'];
            $loc   =   $_GET['loc'];
            
            $con    =    mysql_connect("localhost","root","");    
            $d    =    mysql_select_db("bca_programs",$con);  
            
            $q   =   mysql_query("insert into emp values($e_no,'$e_name','$add',$ph,$sal)");  
            $q1   =   mysql_query("insert into dept values($d_no,'$d_nm','$loc',$e_no)");
            $q2   =   mysql_query("select MIN(salary),MAX(salary),SUM(salary) from emp,dept where emp.emp_no=dept.emp_no");
            
            echo "<tr><td>Minimum salary----</td><td>Maximum salary----</td><td>Sum of Salary</td></tr>";

            while($row  =  mysql_fetch_array($q2))
            {
                echo "<tr><td>".MIN(salary)."</td><td>".MAX(salary)."</td><td>".SUM(salary)."</td></tr>";
            }
            
            mysql_close();
            ?>
</html>
</body>
