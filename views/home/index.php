<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!---Bootstrap css--->
    <link rel="stylesheet" href="../../resources/css/bootstrap.min.css">
    <!---VideoJS css--->
    <link href="../../resources/css/video-js.min.css" rel="stylesheet" />
    <!---Legacy VideoJS for compatibility--->
    <script src="https://vjs.zencdn.net/ie8/1.1.2/videojs-ie8.min.js"></script>

    <!-- STYLESHEETS -->
    <link rel="stylesheet" href="../../resources/css/styles.css" />
    <link rel="stylesheet" href="../../resources/css/reel_style.css" />
    <link rel="stylesheet" href="../../resources/css/nav_foot_style.css" />
    <link rel="stylesheet" href="../../resources/css/contact_style.css" />
    <link rel="stylesheet" href="../../resources/css/home_style.css" />

    <link rel="stylesheet" href="../../resources/css/anim.css" />

    <title>Homepage Ladrillo</title>
</head>
<body>
    

    <!-- NAVBAR -->
    <?php
    include "../navbar.inc";
    ?>

    <!-- HEADER -->
    <?php
    include "header.inc";
    ?>

    <!-- CONTENT -->
    <?php
    include "contentHome.inc";
    ?>

    <!-- CONTACT -->
    <?php
    include "../contact.inc";
    ?>

    <!-- FOOTER -->
    <?php
    include "../footer.inc";
    ?>

    <!---Font awesome--->
    <script src="https://kit.fontawesome.com/cc72c2879b.js" crossorigin="anonymous"></script>
    <!---Bootstrap js--->
    <script src="../../resources/js/bootstrap.bundle.min.js"></script>
    
    <!--Video JS script, video player script-->
    <script src="../../resources/js/video.min.js"></script>
    <script src="../../resources/js/video-player.js"></script>
    <!--Animations-->
    <script src="../../resources/js/anim.js"></script>
    <!--Validacion Contact Form-->
    <script src="../../resources/js/validacion.js"></script>
    <!--SweetAlert-->
    <script src="https://cdn.jsdelivr.net/npm/sweetalert2@8"></script>


</body>
</html>