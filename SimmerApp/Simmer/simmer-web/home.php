<?php
session_start();

if(isset($_SESSION['id']) && isset($_SESSION['user_name'])) {
    ?>
    <!DOCTYPE html>
    <html>
        <head>
            <title>home</title>
            <link rel="stylesheet" type="text/css" href="styles.css">
        </head>
        <body>
            <h1>Hello, <?php echo $_SESSION['user_name']; ?></h1>
            <a href="logout.php">logout</a>
        </body>
    </html>
    <?php
}
else {
    header("Location: index.php");
    exit();
}
?>