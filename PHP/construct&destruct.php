<?php 
class Student 
{ 
function   construct() 
{ 
echo "Constructor is called.<br>"; 
}
function display()
{ 
echo "Welcome to PHP Programming.<br>";
}
function   destruct() 
{ 
echo "Destructor is called.";
}
}
$obj = new Student (); 
$obj->display();
?>
