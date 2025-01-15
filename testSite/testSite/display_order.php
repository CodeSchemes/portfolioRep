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
            <div class="displayorder">
                <?php if (empty($_SESSION['cart'])) : ?>
                <p>There are no items in your cart.</p>
            <?php else: ?>
                <form action="." method="post">
                <input type="hidden" name="action" value="update"/>
                <table>
                    <tr id="cart_header">
                        <th class="left">Receipt Number</th>
                        <th class="left">Item</th>
                        <th class="right">Item Cost</th>
                        <th class="right">Quantity</th>
                        <th class="right">Item Total</th>
                    </tr>
        
                <?php foreach( $_SESSION['cart'] as $key => $item ) :
                    $price  = number_format($item['servPrice'],  2);
                    $total = number_format($item['total'], 2);
                ?>
                    <tr>
                        <td>
                            <?php echo $item['servName']; ?>
                        </td>
                        <td class="right">
                            $<?php echo $price; ?>
                        </td>
                        <td class="right">
                            <input type="text" class="cart_qty"
                                name="newqty[<?php echo $key; ?>]"
                                value="<?php echo $item['numForms']; ?>"/>
                        </td>
                        <td class="right">
                            $<?php echo $total; ?>
                        </td>
                    </tr>
                <?php endforeach; ?>
				 <tr id="cart_footer">
                        <td colspan="3"><b>Subtotal</b></td>
                        <td>$<?php echo get_subtotal(); ?></td>
                    </tr>
                    <tr>
                        <td colspan="4" class="right">
                            <input type="submit" value="Update Cart"/>
                            <p><a href=".?action=finish">Submit Order</a></p>
                        </td>
                    </tr>
                </table>
                </form>
            <?php endif; ?>
            <p><a href=".?action=show_add_item">Add Item</a></p>
            <p><a href=".?action=empty_cart">Empty Cart</a></p>
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
    </body>
    
</html>