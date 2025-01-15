<!DOCTYPE html>
<html>

<!-- the head section -->
<head>
    <title>The Little Coffee Hut</title>
    <link rel="stylesheet" type="text/css" href="paper.css" />
</head>

<!-- the body section -->
<body>
    <div id="page">
        <div id="header">
            <h1>The Little Coffee Hut</h1>
        </div>

        <div id="main">
            <h1>Database Error</h1>
            <p>There was an error connecting to the database.</p>
            <p>The database must be created and MySQL must be running to use with this website.</p>
            <p>Error message: <?php echo $error_message; ?></p>
            <p>&nbsp;</p>
        </div><!-- end main -->

        <footer>
		<address>
            The Little Coffee Hut &nbsp;&nbsp;&nbsp;
            601 Elkhart Avenue &nbsp;&nbsp;&nbsp;
            Peosta, IA 52068 &nbsp;&nbsp;&nbsp;
            1 (800) 556-5110 &nbsp;&nbsp;&nbsp;
         </address>
		 </footer>

    </div><!-- end page -->
</body>
</html>