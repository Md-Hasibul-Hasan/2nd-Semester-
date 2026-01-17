<?php

echo "<h1>This is Associative</h1>";

$student = [
    "name" => "Hasib",
    "age" => "22",
    "dept" => "CSE",
];

$student['age']="56";

// echo "Name: " .$student["name"].  "<br>";
// echo "Age: " .$student["age"].  "<br>";
// echo "Dept: " .$student["dept"]. "<br>";

$students = [
    "stu1"=> ["name" => "Hasib", "age" => "22", "dept" => "CSE",],
    "stu2"=> ["name" => "asif", "age" => "32", "dept" => "math",],
    "stu3"=> ["name" => "tanvir", "age" => "52", "dept" => "acc",],
];

$students['stu1']['name'] = "Hasibul";

$students['stu4'] = [
    "name" => "Rahim",
    "age"  => "25",
    "dept" => "EEE",
];


// foreach($students as $key => $stu){
//     echo $key. " Name: " .$stu['name']. "   "."AGE: ".$stu['age']."   "."Dept: ".$stu['dept']."<br>";
// }

foreach ($students as $key => $stu) {
    echo "<strong>$key</strong><br>";

    foreach ($stu as $key => $value) {
        echo ucfirst($key) . ": " . $value . "<br>";
    }

    echo "<hr>";
}

$numbers = [
    [1,2,3],
    [4,5,6],
    [7,9,0],
];

// for($i=0; $i<3; $i++){
//     for($j=0; $j<3; $j++){
//         echo $numbers[$i][$j]." ";

//     }
//     echo "<br>";
// }

foreach ($numbers as $row){
    foreach($row as $num){
        echo $num . " ";
    }
    echo "<br>";
}



?>
