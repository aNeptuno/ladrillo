
<?php

$nombre   = $_POST["nombre"];
$mail     = $_POST["email"];
$mensaje  = $_POST["mensaje"];
$asunto   = $_POST["asunto"];
$texto    = "Recibiste un mensaje de contacto de: ".$nombre." \n\n ".$mensaje;
$headers  = "From: ".$mail; 

if (mail("zibechiagustin@gmail.com", $asunto, $texto, $headers)) {
    // header("Location: index.php?mailSuccess=1");
    header('Location: ' . $_SERVER['HTTP_REFERER'] . '?mailSuccess=1');
    exit;
} else {
    // header("Location: index.php?mailError=1");
    header('Location: ' . $_SERVER['HTTP_REFERER'] . '?mailError=1');
    exit;
}

?>
