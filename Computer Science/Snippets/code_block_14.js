function byId() {
   var item = document.getElementById("demo");
   item.style.backgroundColor = "yellow";
 }

function byClass() {
  var items = document.getElementsByClassName("test");
  for (var i=0; i<items.length; i++){
    items[i].style.backgroundColor = "yellow";
  }
}

function byTag() {
  var items = document.getElementsByTagName("p");
  for (var i=0; i<items.length; i++){
    items[i].style.backgroundColor = "yellow";
  }
}

function byCSS() {
  var items = document.querySelectorAll("p#demo,span.test");
  for (var i=0; i<items.length; i++){
    items[i].style.backgroundColor = "yellow";
  }
}

function reset() {
  var items = document.body.children;
  for (var i=0; i<items.length; i++){
    items[i].style.backgroundColor = "";
  }
}
