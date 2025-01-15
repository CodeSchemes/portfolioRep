<?php
// Start session management with a persistent cookie
$lifetime = 60 * 60 * 24 * 14;    // 2 weeks in seconds
// $lifetime = 0;                      // per-session cookie
session_set_cookie_params($lifetime, '/');
session_start();

// Create a cart array if needed
if (empty($_SESSION['cart'])) $_SESSION['cart'] = array();

// Create a table of products
//$products = array();
//$products['MMS-1754'] = array('name' => 'Flute', 'cost' => '149.50');
//$products['MMS-6289'] = array('name' => 'Trumpet', 'cost' => '199.50');
//$products['MMS-3408'] = array('name' => 'Clarinet', 'cost' => '299.50');

require_once('database.php');

// Set product ID

 $prod_Id = 1;

// Get all product
  $query = "SELECT * FROM services";
  $servicea = $db->query($query);
  $services = $servicea->fetchAll();


// Include cart functions
require_once('cart.php');

// Get the action to perform
if (isset($_POST['action'])) {
    $action = $_POST['action'];
} else if (isset($_GET['action'])) {
    $action = $_GET['action'];
} else {
    $action = 'home';
}

// Add or update cart as needed
switch($action) {
    case 'add':
        add_item($_POST['productkey'], $_POST['numForms']);
        include('display_order.php');
        break;
    case 'update':
        $new_qty_list = $_POST['newqty'];
        foreach($new_qty_list as $key => $qty) {
            if ($_SESSION['cart'][$key]['numForms'] != $qty) {
                update_item($key, $qty);
            }
        }
        include('display_order.php');
        break;
    case 'show_cart':
        include('display_order.php');
        break;
    case 'show_add_item':
        include('additem.php');
        break;
    case 'empty_cart':
        unset($_SESSION['cart']);
        include('display_order.php');
        break;
    case 'finish':
        include('receiptPage.php');
        break;
	case 'home':
		include('index.html');
		break;
}
?>