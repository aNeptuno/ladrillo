<!-- Bootstrap 5 Contact Form Snippet -->

    <div class="container-fluid contact">
        <div class="row justify-content-center">
        <div class="col-xl-10">
            <div class="card border-0 rounded-3 shadow-lg overflow-hidden">
            <div class="card-body p-0">
                <div class="row g-0">
                <div class="col-sm-6 d-none d-sm-block bg-image"></div>
                <div class="col-sm-6 p-4">
                    <div class="text-center">
                    <div class="h1 contacto-title">CONTACTO</div>
                    </div>
    
                    <!-- * * * * * * * * * * * * * *
                // * * SB Forms Contact Form * *
                // * * * * * * * * * * * * * * *
    
                // This form is pre-integrated with SB Forms.
                // To make this form functional, sign up at
                // https://startbootstrap.com/solution/contact-forms
                // to get an API token!
                //data-sb-form-api-token="API_TOKEN"
                -->
    
                    <form id="contactForm" data-sb-form-api-token="API_TOKEN">
    
                    <!-- Name Input -->
                    <div class="form-floating mb-3">
                        <input class="form-control" id="name" type="text" placeholder="Name" data-sb-validations="required" />
                        <label for="name">Nombre</label>
                        <div class="invalid-feedback" data-sb-feedback="name:required">Nombre requerido</div>
                    </div>
    
                    <!-- Email Input -->
                    <div class="form-floating mb-3">
                        <input class="form-control" id="emailAddress" type="email" placeholder="Email Address" data-sb-validations="required,email" />
                        <label for="emailAddress">Correo electrónico</label>
                        <div class="invalid-feedback" data-sb-feedback="emailAddress:required">Correo electrónico requerido</div>
                        <div class="invalid-feedback" data-sb-feedback="emailAddress:email">El correo electrónico ingresado es invalido</div>
                    </div>
    
                    <!-- Message Input -->
                    <div class="form-floating mb-3">
                        <textarea class="form-control" id="message" type="text" placeholder="Message" style="height: 10rem;" data-sb-validations="required"></textarea>
                        <label for="message">Mensaje</label>
                        <div class="invalid-feedback" data-sb-feedback="message:required">Mensaje requerido</div>
                    </div>
    
                    <!-- Submit success message -->
                    <div class="d-none" id="submitSuccessMessage">
                        <div class="text-center mb-3">
                        <div class="fw-bolder">Mensaje enviado con éxito</div>
                        </div>
                    </div>
    
                    <!-- Submit error message -->
                    <div class="d-none" id="submitErrorMessage">
                        <div class="text-center text-danger mb-3">Error enviando mensaje</div>
                    </div>
    
                    <!-- Submit button -->
                    <div class="d-grid">
                        <button class="btn btn-primary btn-lg" id="submitButton" type="submit">Enviar</button>
                    </div>
                    </form>
                    <!-- End of contact form -->
    
                </div>
                </div>
    
            </div>
            </div>
        </div>
        </div>
    </div>