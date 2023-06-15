<?php

$servername="127.0.0.1";
$username="root";
$password="";
$dbname="php";
$con = new mysqli($servername,$username,$password,$dbname);

if($con->connect_error)
{
	echo "Error";
}

$sql= "CREATE TABLE dept(dno int primary key, dname varchar(20), dlocation varchar(20), eno int references emp(eno))";

if($con->query($sql)=="TRUE")
{
	echo"table is created";
}
else
{
	echo $con->error."table not created";
}

?>
Create Employee Table:
<?php

$servername="127.0.0.1";
$username="root";
$password="";
$dbname="php";
$con = new mysqli($servername,$username,$password,$dbname);

if($con->connect_error)
{
	echo "Error";
}

$sql= "CREATE TABLE emp(eno int primary key, ename varchar(20), edesignation varchar(20), esalary int)";

if($con->query($sql)=="TRUE")
{
	echo"table is created";
}
else
{
	echo $con->error."table not created";
}

?>
Create Project Table:
<?php

$servername="127.0.0.1";
$username="root";
$password="";
$dbname="php";
$con = new mysqli($servername,$username,$password,$dbname);

if($con->connect_error)
{
	echo "Error";
}

$sql= "CREATE TABLE project(pno int primary key, pname varchar(30), pduration varchar(20), pbudget int)";

if($con->query($sql)=="TRUE")
{
	echo"table is created";
}
else
{
	echo $con->error."table not created";
}

?>
Create Emp_Proj relationship Table:
<?php

$servername="127.0.0.1";
$username="root";
$password="";
$dbname="php";
$con = new mysqli($servername,$username,$password,$dbname);

if($con->connect_error)
{
	echo "Error";
}

$sql= "CREATE TABLE emp_pro(eno int references emp(eno), pno int references project(pno), no_of_hours_worked int)";

if($con->query($sql)=="TRUE")
{
	echo"table is created";
}
else
{
	echo $con->error."table not created";
}

?>
Accept Project Name:
<!DOCTYPE html>
<html>
<head>
	<title>Accept pname</title>
</head>
<body>
	<form action="ass5bq1.php" method="POST">
			Enter Project Name:<input type="textbox" name="pname"><br>
			<button>Submit</button>
	</form>
</body>
</html>
Display Employee Details:
<?php
$servername="127.0.0.1";
$pname;
$username="root";
$password="";
$dbname="php";
$con = new mysqli($servername,$username,$password,$dbname);
$pname=$_POST['pname'];
$sql="SELECT eno, ename, no_of_hours_worked from emp, project, emp_pro where emp.eno=emp_pro.eno and project.pno=emp_pro.pno and project.pname="$pname"";
?>
