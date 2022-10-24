
<!--  <script>
  if(localStorage.getItem('alert' = 'success')){
    alert('no error');
 <div class="alert alert-success" role="alert">
  This is a success alert—check it out!
</div>
localStorage.removeItem('alert');
 };
 if(localStorage.getItem('alert' = 'error')){
    alert('error');
}; 

</script> -->

<!-- <div class="section-title reveal fade-top">/ CONTACTO</div> -->
 

<section class="section black" id="contacto">
    <div class="section-header">
        <h3 class="section-title reveal-horizontal fade-left">/ CONTACTO</h3>
        <h2 class="section-subtitle reveal-horizontal fade-right">Ponete en contacto con nosotros</h2>
    </div>
    <div class="section-content-contact">
        <form class="contact-form" id="contact-form"  name="contact-form" action="mail.php" method="POST">
            <div class="contact-item">
                <input type="text" class="form-control" placeholder="Nombre" aria-label="Nombre" required>
            </div>
            <div class="contact-item">
                <input type="text" class="form-control" placeholder="Email" aria-label="Email" required>
            </div>
            <div class="contact-item">
                <input type="text" class="form-control" placeholder="Asunto" aria-label="Asunto" required>
            </div>
            <div class="contact-item">
                <textarea class="form-control" placeholder="Mensaje" aria-label="Mensaje" required></textarea>
            </div>

            <div class="contact-btn">
                <input class="btn btn-secondary btn-contact" type="submit" value="Enviar">
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

