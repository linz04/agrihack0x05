<?php
session_start();
 
if(!isset($_SESSION["login"]) || $_SESSION["login"] !== true){
    header("location: login.php");
    exit;
}
if(isset($_POST["logout"]) && $_POST["logout"] === "true" ) {
	$_SESSION = array();
	session_destroy();
    header("location: login.php");
	exit;
}
?>

<html>
	<head>
		<title>ADMIN PANEL</title>
	</head>
	<body>
		<h1>ADMIN PANEL</h1>
		<br>
		<h3>Welcome, <?php echo $_SESSION["username"];?>!</h3>
		<br>
		<p>
			<?php 
			if ($_SESSION["username"] === "admin") {
				echo "Here is your flag : agrihack{ez_SeQueL_Inj3kxx1on_}";
			}
			else{
				echo "Kamu bukan admin, pergi sana!!!";
			}
			?>
		</p>
		<br>
		<br>
		<form method="POST" action="/">
			<input type="hidden" name="logout" value="true"> 
			<button type="submit" name="submit">Logout</button>
		</form>
	</body>
</html>
