<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "simmer";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $recipeName = $_POST['name'];
    $recipeTime = $_POST['cooktime'];
    $servings = $_POST['servings'];
    $description = $_POST['description'];

    // Use prepared statements to prevent SQL injection
    $stmt = $conn->prepare("INSERT INTO recipes (name, cooktime, servings, descriptions) VALUES (?, ?, ?, ?)");
    $stmt->bind_param("ssss", $recipeName, $recipeTime, $servings, $description);

    if ($stmt->execute()) {
        echo "New record created successfully";
    } else {
        echo "Error: " . $stmt->error;
    }

    $stmt->close();
}

$conn->close();
?>



