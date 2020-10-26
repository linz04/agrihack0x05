<?php require_once "flag.php"; 


?>


<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <title>My Website</title>
  </head>
  <body>
    <h1>Welcome to My Website</h1>
    
    <a href="index.php">Home</a> |
    <a href="index.php?page=book1.php">Kingsman: The Secret Service</a> |
    <a href="index.php?page=book2.php">Enola Holmes</a> |
    <a href="index.php?page=book3.php">Secret File</a>
    
    <hr/>
    
    <?php 
    ini_set('display_errors', 1);
	ini_set('display_startup_errors', 1);
	error_reporting(E_ALL);
    if (isset($_GET['page'])) 
    {   
        include $_GET['page']; 
    } 
    else 
    {
        echo "<p>Welcome to LSI IPB!! Silahkan pilih buku yang mau Anda baca.</p>";
    }
    
    ?>
    
  </body>
</html>


