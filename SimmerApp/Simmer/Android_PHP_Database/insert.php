<?php
$recipeName = $_POST['name'];
$recipeTime = $_POST['cooktime'];
$servings = $_POST['servings'];
$description = $_POST['description'];
// Database connection settings
$host = 'localhost';       // Your database host (e.g., localhost)
$db = 'simmer';           // Your database name
$user = 'root';            // Your database username (default: root for MySQL)
$pass = '';                // Your database password (leave empty if none)


$conn = mysqli_connect($host,$user,$pass,$db);

$sql = "INSERT INTO recipes (name, cooktime, servings, description)
VALUES ('$recipeName','$recipeTime', '$servings', '$description')";

if ($conn->query($sql) === TRUE) {
    echo '<h1> New record created successfully </h1>';
    mysqli_close($conn);
  } else {
    echo "Error: " . $sql . "<br>" . $conn->error;
  }
mysqli_close($conn);
?>
