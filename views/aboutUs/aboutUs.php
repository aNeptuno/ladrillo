<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <!-- STYLESHEETS -->
    <link rel="stylesheet" href="../../resources/css/styles.css" />
    <link rel="stylesheet" href="../../resources/css/header_style.css" />
    <link rel="stylesheet" href="../../resources/css/nav_foot_style.css" />
    <link rel="stylesheet" href="../../resources/css/contact_style.css" />

    <!-- CONTENT -->
    <link rel="stylesheet" href="../../resources/css/content_style.css" />
    <link rel="stylesheet" href="../../resources/css/home_style.css" />

    <link rel="stylesheet" href="../../resources/css/anim.css" />
    <!---Bootstrap css--->
    <link rel="stylesheet" href="../../resources/css/bootstrap.min.css">
    <!---VideoJS css--->
    <link href="../../resources/css/video-js.min.css" rel="stylesheet" />
    <!---Legacy VideoJS for compatibility--->
    <script src="https://vjs.zencdn.net/ie8/1.1.2/videojs-ie8.min.js"></script>

    <title>Homepage Ladrillo</title>
</head>
<body>
    

    <!-- NAVBAR -->
    <?php
    include "../navbar.inc";
    ?>

    <!-- CONTENT -->
    <?php
    include "contentAboutUs.inc";
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
    
    <!-- CDN Link to SB Forms Scripts -->
    <script src="https://cdn.startbootstrap.com/sb-forms-latest.js"></script>
    
    <!--Video JS script, video player script-->
    <script src="../../resources/js/video.min.js"></script>
    <script src="../../resources/js/video-player.js"></script>
    <!--Animations-->
    <script src="../../resources/js/anim.js"></script>

</body>
</html>