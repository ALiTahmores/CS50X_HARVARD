document.addEventListener('DOMContentLoaded', function () {
    // Select the menu button and navigation menu
    const menuButton = document.querySelector('nav .right button');
    const navMenu = document.querySelector('nav .right ul');

    // Toggle the menu display on button click
    menuButton.addEventListener('click', function () {
        navMenu.style.display = (navMenu.style.display === 'flex') ? 'none' : 'flex';
    });
});

document.addEventListener('DOMContentLoaded', function () {
    // Select menu links for smooth scrolling
    const menuLinks = document.querySelectorAll('nav .right a');

    // Add smooth scroll to each link
    menuLinks.forEach(link => {
        link.addEventListener('click', function (event) {
            const targetId = this.getAttribute('href');

            // Apply smooth scroll only to internal links
            if (targetId.startsWith("#")) {
                event.preventDefault();
                const targetElement = document.getElementById(targetId.substring(1));
                if (targetElement) {
                    smoothScroll(targetElement, 1000);
                }
            }
        });
    });

    // Handle "Get In Touch" button with smooth scroll
    const getInTouchButton = document.getElementById('get-in-touch');
    getInTouchButton.addEventListener('click', function (event) {
        event.preventDefault();
        const contactSection = document.getElementById('contact');
        smoothScroll(contactSection, 1000);
    });

    // Smooth scroll function with custom duration
    function smoothScroll(target, duration) {
        let targetPosition = target.getBoundingClientRect().top;
        let startPosition = window.pageYOffset;
        let distance = targetPosition;
        let startTime = null;

        function animation(currentTime) {
            if (startTime === null) startTime = currentTime;
            let timeElapsed = currentTime - startTime;
            let run = ease(timeElapsed, startPosition, distance, duration);
            window.scrollTo(0, run);
            if (timeElapsed < duration) requestAnimationFrame(animation);
        }

        // Ease function for smoother animation
        function ease(t, b, c, d) {
            t /= d / 2;
            if (t < 1) return c / 2 * t * t + b;
            t--;
            return -c / 2 * (t * (t - 2) - 1) + b;
        }

        requestAnimationFrame(animation);
    }

    // Sticky navbar functionality
    const navbar = document.querySelector('nav');
    const sticky = navbar.offsetTop;

    function stickyNavbar() {
        if (window.pageYOffset > sticky) {
            navbar.classList.add("sticky");
        } else {
            navbar.classList.remove("sticky");
        }
    }

    window.onscroll = function () {
        stickyNavbar();
    };
});
