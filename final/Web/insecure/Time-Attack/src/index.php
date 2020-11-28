<?php 

$flag = file_get_contents('./flag');

?>

<html>
	<head>
		<title>Time Attack 0x05</title>
		<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
	</head>
	<body style="background-color:grey;">
		<div class="container">
			<div class="row" style="margin-top: 5%;">
				<h1>Time Attack 0x05</h1>
			</div>
			<div class="row">
				<marquee><h2>LINZ IS HERE</h2></marquee>
			</div>
			<div class="row" >
				<form method="POST" action="/" style="width: 100%;">
					<div class="form-group">
						<label for="query">Password</label>
						<input class="form-control form-control-lg" name="query" type="text" placeholder="Password">
					</div>
					<?php 
						if(isset($_POST['query'])){
							$query = $_POST['query'];
							if($query === $flag)
								die("<h3>WOW ".$flag."</h3>");
							if(strlen($query) === strlen($flag)){
								echo '<h2>Correct length!</h2>';
							}
							else{
								echo '<h2>Incorrect password length!</h2>';
							}
							for($i = 0; $i < strlen($flag); $i++){
								if($flag[$i] === $query[$i]){
									sleep(3);
									echo '<h2>Sleeepiing...</h2>';
								}
							}
						}
					?>
					<div class="form-group">
						<button type="submit" class="btn-primary form-control">Submit</button>
					</div>

				</form>
			</div>
		</div>


		<script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
		<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
		<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
	</body>
</html>
