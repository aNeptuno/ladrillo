
<?php

$nombre   = $_POST["name"];
$mail     = $_POST["email"];
$mensaje  = $_POST["message"];
$asunto   = $_POST["subject"];
$texto    = "Recibiste un mensaje de contacto de: ".$nombre." \n\n ".$mensaje;
$headers  = "From: ".$mail; 

session_start();

if (mail("zibechiagustin@gmail.com", $asunto, $texto, $headers)) {
     ?> 
    <script type="text/javascript">
        miStorage = window.localStorage;
        localStorage.setItem("alert", "success");
    </script>
    <?php
    header("Location: index.php#contacto");
} else {
    ?> 
    <script type="text/javascript">
        miStorage = window.localStorage;
        localStorage.setItem("alert", "error");
    </script>
    <?php
    header("Location: index.php#contacto");
}

?>
