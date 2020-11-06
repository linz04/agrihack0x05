<?php 
include 'config.php';

$res = NULL;
if(isset($_SESSION["login"]) && $_SESSION["login"] === true){
    header("location: index.php");
    exit;
}
if(isset($_POST['username']) && isset($_POST['password'])){
	$user = $_POST['username'];
	$pass = $_POST['password'];
	$res = $conn->query('SELECT * FROM login WHERE username ="'.$user.'" AND password = "'.$pass.'";');
	if ($res->rowCount() > 0) {
		session_start();
		
		$_SESSION["login"] = true;
		$_SESSION["username"] = $user;                            
		
		header("location: index.php");
		exit;
	}
}
?>

<html>
	<head>
		<title>ADMIN PANEL</title>
	</head>
	<body>
		<h1>LOGIN</h1>
		<form method="POST" action="/login.php">
			Username : <input name="username" type="text">
			<br>
			Password : <input name="password" type="password">
			<br>
			<button type="submit" name="submit">Login</button>
		</form>
		<br>
		<?php 
		if ($res !== NULL && $res->rowCount() == 0 ) {
			echo "Username atau password salah!";
		}

		?>
		<!-- guest : p4ssw0rd -->
	</body>
</html>
