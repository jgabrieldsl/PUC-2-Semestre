function showMessage(content) {
    document.getElementById("messageBox").innerHTML = content;
    var mb = document.getElementById("messageBox");
    mb.style.display = "block";
}

/*
setTimeout (function() {
    mb.style.display = "none";
}, 3000); // Only show for 3 seconds
*/



function hideError() {
    document.getElementById("messageBox").style.display = "none";
    
}

function isValid(email, password) {
    var valid = false;

    if (email.length > 0 && password.length > 0) {
        valid = true;
    } else if (email.length == 0 && password.length == 0) {
        showMessage("Email and password cannot be empty");
    } else if (email.length == 0) {
        showMessage("Email cannot be empty");
    } else if (password.length == 0) {
        showMessage("Password cannot be empty");
    }

    return valid;
    
}

async function signIn(email, password) {
    var email = getElementById("fEmail").value;
    var password = getElementById("fPassword").value;
    email = email.trim();
    password = password.trim();

    
    if (isValid(email, password)) {

        const loginData = new Headers();
        loginData.append('email', email);
        loginData.append('password', password);

        const url = '172.20.10.3:5500';
        try {
            const res = await fetch( url, {
                method: 'POST',
                headers: loginData
            });
            if (res.ok) {
                showMessage("Login success", show.status);
            }
            
        } catch (error) {
            showMessage("Login failed");
        }
    }
}