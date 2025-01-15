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
            <form action=".?action=add" method="post">
                <div class="dropdown">
                <select name="productkey">
                <?php foreach($services as $key => $service) :
                    $price = number_format($service['servPrice'], 2);
                    $name = $service['servName'];
                    $item = $name . ' ($' . $price . ')';
                ?>
                    <option value="<?php echo $key; ?>">
                        <?php echo $item; ?>
                    </option>
                <?php endforeach; ?>
                </select><br />
                
                    <label>Please select the amount of forms</label><br>
						<select name="numForms">
							<?php for($i = 1; $i <= 5; $i++) : ?>
							<option value="<?php echo $i; ?>">
							<?php echo $i; ?>
							</option>
							<?php endfor; ?>
						</select><br />
                    
                    <br><br>
                    <div id="buttons">
                        <label>&nbsp;</label>
                        <input type="submit" value="Process Order" /><br />
                    </div>	
                </div>
            </form>
                    

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