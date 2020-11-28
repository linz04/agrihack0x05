<?php
//thisis secret
session_start();
if (isset($_COOKIE['hack']))
{
        include("hack/".$_COOKIE['hack']);
}
?>


<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
body {
  margin: 0;
  font-family: Arial, Helvetica, sans-serif;
}

.topnav {
  overflow: hidden;
  background-color: #333;
}

.topnav a {
  float: left;
  color: #f2f2f2;
  text-align: center;
  padding: 14px 16px;
  text-decoration: none;
  font-size: 17px;
}

.topnav a:hover {
  background-color: #ddd;
  color: black;
}

.topnav a.active {
  background-color: #4CAF50;
  color: white;
}
</style>
</head>
<div class="topnav">
  <a class="active" href="index.php">Home</a>
  <a href="list.php">Books</a>
</div>

<div style="padding-left:16px">
  <h2>List Books</h2>
    <p>Welcome to LSI IPB!! Silahkan pilih buku yang anda mau baca<br>
      <div>
        <form action="" method="post" id="button">
        <button type="submit" name="page" value="book1" class="btn-link">Kingsman: The Secret Service</button>
        <button type="submit" name="page" value="book2" class="btn-link">Enola Holmes</button>
        <button type="submit" name="page" value="book3" class="btn-link">Enola Holmes</button>
        </form>
      </div>
<?php
        if (isset($_POST['page']))
        {
                include($_POST['page'].".php");
        }
        else
        {
        }
?>
  </body>
</html>


