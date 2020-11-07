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
 		   	echo "Sorry its wrong:(";
   		}
	}
?>