function addNew() {
  var newElement = document.createElement('P');
  newElement.innerText = "A new paragraph";
  var div = document.getElementById("demo");
  div.appendChild(newElement);
}

function removeAll() {
	var div = document.getElementById("demo");
	while(div.children.length > 0){
  	div.removeChild(div.children[0]);
  }
}

