function onMouseOverKw(){
    document.getElementById("obrazek").innerHTML = "<img src='kwadrat.png'>";
}
function onMouseOutKw(){
    document.getElementById("obrazek").innerHTML = "";
}
function onMouseOverKo(){
    document.getElementById("obrazek").innerHTML = "<img src='kolo.png'>";
}
function onMouseOutKo(){
    document.getElementById("obrazek").innerHTML = "";
}
function onMouseOver(){
    document.getElementById("kolo").onmouseover = function() {onMouseOverKo()};
    document.getElementById("kwadrat").onmouseover = function() {onMouseOverKw()};
}
function onMouseOut(){
    document.getElementById("kolo").onmouseout = function() {onMouseOutKo()};
    document.getElementById("kwadrat").onmouseout = function() {onMouseOutKw()};
}