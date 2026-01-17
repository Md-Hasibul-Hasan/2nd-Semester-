<!-- <?php

// echo $_REQUEST['name']."<br>";
// echo $_REQUEST['email']."<br>";
// echo $_REQUEST['password']."<br>";

?> -->


<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $name = $_POST['name'] ?? '';
    $email = $_POST['email'] ?? '';
    $password = $_POST['password'] ?? '';

    echo "Name: " . htmlspecialchars($name) . "<br>";
    echo "Email: " . htmlspecialchars($email) . "<br>";
    echo "Password: " . htmlspecialchars($password) . "<br>";
}
?>
