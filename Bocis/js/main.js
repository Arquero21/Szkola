var tab = new Array(11, 42, 15, 325, 624, 34, 236, 623, 22, 33);
        document.write("Zadanie 2 <br>");
        document.write("Najwieksza liczba to: " + Math.max.apply(null, tab) + "<br>");
        document.write("Najmniejsza liczba to: " + Math.min.apply(null, tab) + "<br>");

        document.write("<br><br>Zadanie 3");
        var suma = 0;
        var srednia;
        for (i = 0; i < tab.length; i++) {
            suma += tab[i];
            srednia = suma / tab.length;
        }
        document.write("<br />Suma elementów tablicy wynosi: " + suma);
        document.write("<br />średnia elementów tablicy wynosi: " + srednia + "<br>");


        tab.sort((a, b) => {
            if (a > b) {
                return 1;
            }
            if (a < b) { return -1; } return 0;
        });
        document.write("<br>Zadanie 5 <br>");
        document.write(tab.sort((a, b) => a - b));
        document.write("<br>" + tab.sort((a, b) => b - a) + "<br>");
    