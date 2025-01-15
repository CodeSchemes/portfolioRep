<?php
	$loanAmount = $_POST['amount'];
	$annualRate = $_POST['apr'];
	$monthlyPay = $_POST['mPayment'];
	$annualRate = ($annualRate / 100) / 12;
	$interestAmount = 0;
	$interestTotal = 0;
	$amortizedAmount = 0;
	$month = 0;
	$remainingBalance = $loanAmount;

		
	
?>
<!doctype HTML>
<html>
	<head>
		<meta charset="UTF-8">
		<title>Loan Payments</title>
		<link href="mainstyles.css" rel="stylesheet" />
	</head>
	<body>
	<table id="tableHead">
		<tr>
			<th>Principal</th>
			<th>Interest</th>
			<th>Monthly Payment</th>
		</tr>
		<tr>
			<td><?php echo $loanAmount ?></td>
			<td><?php echo $annualRate ?></td>
			<td><?php echo $monthlyPay ?></td>
		</tr>
	</table>

	<table id="tableBody">
		<tr>
			<th>Month</th>
			<th>Interest</th>
			<th>Amortized</th>
			<th>Balance</th>
			<th>Interest to Date</th>
		</tr>
		<?php 	
			while ($remainingBalance > 0) {
			$month++;
			
			if ($remainingBalance > 0){
				
				$interestAmount = $remainingBalance * $annualRate;
				$amortizedAmount = $monthlyPay - $interestAmount;
				$interestTotal += $interestAmount;
				$remainingBalance -= $amortizedAmount;
				$prevIntTotal = $interestTotal - $interestAmount;
				
				echo '<tr>';
				echo '<td>'. $month .'</td>';
				echo '<td>'. number_format($interestAmount, 2) .'</td>';
				echo '<td>'. number_format($amortizedAmount, 2) .'</td>';
				echo '<td>'. number_format(max(0,$remainingBalance), 2) .'</td>';
				echo '<td>'. number_format($interestTotal, 2) .'</td>';
				echo '</tr>';
			} 
			if ($remainingBalance < $interestTotal){
				echo '<tr>';
				echo '<td>'. $month .'</td>';
				echo '<td>'. number_format($interestAmount, 2) .'</td>';
				echo '<td>'. number_format(max(0, min($interestTotal, $amortizedAmount)), 2) .'</td>';
				echo '<td>'. number_format(max(0,$remainingBalance), 2) .'</td>';
				echo '<td>'. number_format($interestTotal, 2) .'</td>';
				echo '</tr>';
			}
		} 
		?>
	</table>
	<?php 
		echo "Last Payment Due: ". number_format($interestTotal, 2);
	?>
	</body>
</html>