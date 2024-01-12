function oblicz(){
    let dropDown = document.getElementById("woda").value;
    let ilosc = document.getElementById("ilosc").value;
    switch(dropDown){
        case "zywiec":
            document.getElementById("pole").innerHTML = ilosc * 1.50; break;
        case "muszynianka":
            document.getElementById("pole").innerHTML = ilosc * 1.70; break;
        case "cisowianka":
            document.getElementById("pole").innerHTML = ilosc * 1.55; break;

    }
}