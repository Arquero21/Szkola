function oblicz(){
    let ilosc = document.getElementById("ilosc").value;
    let rodzaj = document.getElementById("czekolada").value;
    let waga = document.getElementById("gramy").value;
    switch (rodzaj){
        case "wedel":
            if(waga == "100")
                document.getElementById("wynik").innerHTML = ilosc * 5.2;
            else 
                document.getElementById("wynik").innerHTML = 2 * ilosc * 5.2;
                break;
        case "milka":
            if(waga == "100")
                document.getElementById("wynik").innerHTML = ilosc * 4;
            else 
                document.getElementById("wynik").innerHTML = 2 * ilosc * 4;
                break;
        case "wawel":
            if(waga == "100")
                document.getElementById("wynik").innerHTML = ilosc * 4.5;
            else 
                document.getElementById("wynik").innerHTML = 2 * ilosc * 4.5;
                break;
    }
}