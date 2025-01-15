<?php
// Add an item to the cart
function add_item($key, $numForms) {
    global $services;
    if ($numForms < 1) return;

    // If item already exists in cart, update quantity
    if (isset($_SESSION['cart'][$key])) {
        $numForms += $_SESSION['cart'][$key]['numForms'];
        update_item($key, $numForms);
        return;
    }

    // Add item
    $price = $services[$key]['servPrice'];
    $total = $price * $numForms;
    $item = array(
        'servName' => $services[$key]['servName'],
        'servPrice' => $price,
        'numForms'  => $numForms,
        'total' => $total
    );
    $_SESSION['cart'][$key] = $item;
}

// Update an item in the cart
function update_item($key, $numForms) {
    global $services;
    $quantity = (int) $numForms;
    if (isset($_SESSION['cart'][$key])) {
        if ($quantity <= 0) {
            unset($_SESSION['cart'][$key]);
        } else {
            $_SESSION['cart'][$key]['numForms'] = $numForms;
            $total = $_SESSION['cart'][$key]['servPrice'] *
                     $_SESSION['cart'][$key]['numForms'];
            $_SESSION['cart'][$key]['total'] = $total;
        }
    }
}

// Get cart subtotal
function get_subtotal() {
    $subtotal = 0;
    foreach ($_SESSION['cart'] as $item) {
        $subtotal += $item['total'];
    }
    $subtotal = number_format($subtotal, 2);
    return $subtotal;
}
?>