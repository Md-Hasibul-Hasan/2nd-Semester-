<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    echo "<h1> This is PHP </h1>";
    $name="haisb";
    $age=34;
    echo "Age: ".$age;
    echo "<br>";
    echo "Name: ".$name;
    echo "<br>";

    for( $i= 0; $i< 10; $i++ ){
        echo "num:".$i;
        echo "<br>";
    }

    echo "<hr>";

    $color = ['1', '2', '3', '4', '5'];

    for($i=0; $i<5; $i++ ){
        echo $color[$i]."<br>";
    }

    echo "<hr>";

    foreach( $color as $i){
        echo " ".$i." ";
    }

    echo "<hr>";


    //associative array
    $arr= [
        'f1'=>"A",
        'f2'=>'B'
    ];

    foreach( $arr as $k=>$v ){
        echo ' '.$k.'=>'.$v.' ';
        echo "<br>";
    }

    ?>
</body>
</html>