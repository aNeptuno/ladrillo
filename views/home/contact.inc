
 <script>
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

 </script>
 
 <section id="contacto">
 <div class="container-fluid contact">
        <div class="row justify-content-center bg-black">
        <div class="col-xl-10">
            <div class="card border-0 rounded-3 shadow-lg overflow-hidden">
            <div class="card-body p-0">
                <div class="row g-0">
                <!-- <div class="col-sm-6 d-none d-sm-block bg-image reveal fade-bottom"></div> -->
                <div class="p-4"> <!-- col-sm-6 -->
                    <div class="text-center">
                    <div class="h1 contacto-title reveal fade-top">CONTACTO</div>
                    </div>
                    <div class="col-lg mb-md-0 mb-5">
            <form id="contact-form" class="needs-validation reveal fade-bottom" name="contact-form" action="mail.php" method="POST">

                <!--Grid row-->
                <div class="row">

                    <!--Grid column-->
                    <div class="col-md-6">
                        <div class="form-outline">
                            <input type="text" id="name" name="name" class="form-control" required>
                            <label for="name" class="form-label contact-text">Nombre</label>
                        </div>
                    </div>
                    <!--Grid column-->

                    <!--Grid column-->
                    <div class="col-md-6">
                        <div class="md-form mb-0">
                            <input type="email" id="email" name="email" class="form-control" required>
                            <label for="email" class="form-label contact-text">Email</label>
                        </div>
                    </div>
                    <!--Grid column-->

                </div>
                <!--Grid row-->

                <!--Grid row-->
                <div class="row">
                    <div class="col-md-6">
                        <div class="md-form mb-0">
                            <input type="text" id="subject" name="subject" class="form-control" required>
                            <label for="subject" class="form-label contact-text">Asunto</label>
                        </div>
                    </div>
                </div>
                <!--Grid row-->

                <!--Grid row-->
                <div class="row">

                    <!--Grid column-->
                    <div class="col-md-6">

                        <div class="md-form">
                            <textarea type="text" id="message" name="message" rows="8" class="form-control md-textarea" required></textarea>
                            <label for="message" class="form-label contact-text">Mensaje</label>
                        </div>

                    </div>
                </div>
                <!--Grid row-->
            
                <div class="col-12">
                        <button class="btn btn-primary" type="submit">Enviar</button>
                </div>
                
                <script src='https://www.google.com/recaptcha/api.js'></script>

               <!--  <div class="g-recaptcha" data-sitekey="6LecbRIiAAAAAPSXQth20EILpKCqfGh2tJsqQZ2Z"></div> -->

            </form>
    
                </div>
                </div>
    
            </div>
            </div>
        </div>
        </div>
    </div>
</section>