<!--Validacion Contact Form-->
<script src="../../resources/js/validacion.js"></script>
<?php
  if (isset($_GET['mailSuccess'])) {
    echo "<script>alert('Muchas gracias por contactarnos');
    window.location.href = 'index.php#contacto';</script>";
}

if (isset($_GET["mailError"])) {
    echo "<script>alert('Hubo un error en el envío del correo, prueba otra vez');
    window.location.href = window.history.go(-1) + '#contacto';</script>";
}
?>
 <script></script>
<section class="section black" id="contacto">
    <div class="section-header">
        <h3 class="section-title reveal-horizontal fade-left">/ CONTACTO</h3>
        <h2 class="section-subtitle reveal-horizontal fade-right">Ponete en contacto con nosotros</h2>
    </div>
    <div class="section-content-contact">


        <form class="contact-form needs-validation" id="contact-form"  name="contact-form" action="../mail.php" method="POST" novalidate>
        <div class="contact-item">
            <input type="text" class="form-control" placeholder="Nombre" aria-label="Nombre" id="nombre" name="nombre" required>
            <div class="invalid-feedback">
            Ingrese nombre
            </div>
        </div>
        <div class="contact-item">
            <input type="text" class="form-control" class="form-control" placeholder="Email" aria-label="Email" id="email" name="email" required>
            <div class="invalid-feedback">
            Ingrese Email
            </div>
        </div>
        <div class="contact-item">
            <input type="text" class="form-control" placeholder="Asunto" aria-label="Asunto" id="asunto" name="asunto" required>
            <div class="invalid-feedback">
            Ingrese Asunto
            </div>
        </div>
        <div class="contact-item">
        <textarea class="form-control" placeholder="Mensaje" aria-label="Mensaje" id="mensaje" name="mensaje" required></textarea>
            <div class="invalid-feedback">
            Escriba un mensaje
            </div>
        </div>
        <div class="contact-btn">
                <input class="btn btn-secondary btn-contact" type="submit" id="submit" value="Enviar">
            </div>
        </form>


        <div class="contact-info">
            <h4>Información de contacto</h4>
            <p>ladrillo@maildeladrillo.com</p>
            <p>Seguinos en nuestras redes</p>
            <li class="nav-item brands-menu contact-brands">
                <a href="https://www.facebook.com/ladrillouy">
                    <i class="fa-brands fa-square-facebook"></i>
                </a>
                <a href="https://www.instagram.com/ladrillo.coop/">
                    <i class="fa-brands fa-instagram"></i>
                </a>
                <a href="https://www.youtube.com/">
                    <i class="fa-brands fa-youtube"></i>
                </a>
            </li>
        </div>
    </div>
</section>

