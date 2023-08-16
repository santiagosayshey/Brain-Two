// Create new AJAX request
var xhttp = new XMLHttpRequest();

// Define behaviour for a response
xhttp.onreadystatechange = function() {
 if (this.readyState == 4 && this.status == 200) {
 // do stuff if successful
 }
};

// Initiate connection
xhttp.open("POST", "search.html", true);

// Set content type to JSON
xhttp.setRequestHeader("Content-type", "application/json");

// Send request
xhttp.send(JSON.stringify({param1:"value1", param2:2}));
