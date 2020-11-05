<!DOCTYPE html>
<html>
<head>
	<title>token</title>
	<!-- <form method="get" action="index.php">
		token : <input type="text" name="token">
		<input type="submit">
	</form> -->
</head>
<body>
<?php
	require ('flag.php');
	if (isset($_GET["token"])) {
	    if (strcmp($_GET["token"], $token) == 0) {
			$auth = true;
		}
		if ($auth) {
	    	echo "Wow! this your flag : $flag";
 	    }
 	   	else {
 		   	echo "Sorry its wrong:(<br>";
   		}
	}
	highlight_file("index1.php");
?>	
</body>
</html>
