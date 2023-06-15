<html>
    <body>
<?php
class Employee
{
    private $id, $name, $department, $salary;
    function __construct($i, $n, $d, $s)
    {
        $this->id = $i;
        $this->name = $n;
        $this->department = $d;
        $this->salary = $s;
    }
    public function getEmpSalary()
    {
        return $this->salary;
    }
}
class Manager extends Employee
{
    private $bonus;
    function __construct($i, $n, $d, $s, $b)
    {
        parent::__construct($i, $n, $d, $s);
        $this->bonus = $b;
    }
    public function getTotalSalary()
    {
        return parent::getEmpSalary() + $this->bonus;
    }
}
$managers[0] = new Manager(54, "Shoeb", "FYBCA", 54000, 5000);
$managers[1] = new Manager(53, "Sh", "FYB", 55000, 400);
$managers[2] = new Manager(52, "oeb", "BCA", 74000, 1000);
$managers[3] = new Manager(51, "Shb", "FA", 58000, 7000);
$managers[4] = new Manager(50, "Sb", "FCA", 52000, 4000);
$managers[5] = new Manager(49, "eb", "ACF", 51000, 500);
$max_total_sal = 0;
foreach ($managers as $manager) {
    if ($manager->getTotalSalary() > $max_total_sal)
        $max_total_sal = $manager->getTotalSalary();
}
echo "Maximum Total salary is " . $max_total_sal . "<br />";
?>
</body>
</html>