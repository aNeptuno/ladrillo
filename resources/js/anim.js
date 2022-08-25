function reveal() {
    //select all elements with class .reveal
    var reveals = document.querySelectorAll(".reveal"); 
    //catch lenght that has been scrolled
    for (var i = 0; i < reveals.length; i++) { 
        var windowHeight = window.innerHeight;
        var elementTop = reveals[i].getBoundingClientRect().top;
        //define how many pixels from the top of screen to trigger animation
        var elementVisible = 150;
        //conditions to trigger animation
        if (elementTop < windowHeight - elementVisible) {
            reveals[i].classList.add("active");
        } else {
            reveals[i].classList.remove("active");
        }
    }
}

window.addEventListener("scroll", reveal);