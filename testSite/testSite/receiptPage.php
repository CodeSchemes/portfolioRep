<?php

    require_once('database.php');
	
	// Set next order number
    $query = "SELECT MAX(custID) AS max FROM completedservice";
    $order = $db->query($query);
	$orders = $order->fetchAll();
	$order->closeCursor(); 	
	
	foreach($orders as $order) :
	if ($order['max'] <= 0) {
		$Receipt_no = 1;
	} else {
		$Receipt_no = $order['max'];
	}
	endforeach;


	// get the data form the shopping cart
	foreach($_SESSION['cart'] as $key => $item) :
		$prod_Id = $services[$key]['servID'];
		$qty = $item['numForms'];
		$Receipt_no++;
		
	$query = "INSERT INTO williamsfinances.completedservice 
					(custID, qty, serv_ID)
					Values(:custID, :qty, :serv_ID)";
	$statement = $db->prepare($query);
 	$statement->bindValue(':custID', $Receipt_no);
	$statement->bindValue(':serv_ID', $prod_Id);
	$statement->bindValue(':qty', $qty);
	$statement->execute();
	$statement->closeCursor();
	endforeach;

?>
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Williams Fantastic Finances</title>
        <meta name="description" content="">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link rel="stylesheet" href="main.css">
    </head>
    <body>
        <div class="container">
            <div id="header">
                <ul class="menu">
                  <li class="btn_1"><a href=".">Home Page</a></li>
                  <li class="line"></li>
                  <li class="btn_2"><a href="about.html">Our History</a></li>
                  <li class="line"></li>
                  <li class="btn_6"><a href="contact.html">Contacts</a></li>
				  <li class="line"></li>
                  <li class="btn_6"><a href=".?action=show_add_item">Services</a></li>
				  <li class="line"></li>
				  <li class="btn_6"><p><a href=".?action=show_cart">View Cart</a></p>
                </ul>
              </div>


              </div>
			<footer>
				<div id="footer1">
					<ul>
						<li>Email: brownw2@nicc.edu</li>
						<li>Phone: (xxx)-xxx-xxxx</li>
						<li>Address: 7465 White ST.</li>
					</ul>
				</div>
			</footer>
        </div>

    </body>
    
</html>