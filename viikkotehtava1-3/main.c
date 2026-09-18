/*
 * . Tee C-kielinen ohjelma, joka laskee suorakulmaisen kolmion alan,
 * kun kanta=7m ja korkeus=4 m sekä tulostaa vastauksen.
 * Tulostusesimerkki:
 * Kun kolmion kanta on 7m ja korkeus 4m, on kolmion ala 14m2.
*/
#include <stdio.h> // tätä tarvitaan printf ja scanf

int main() // pääohjelma: suoritus lähtee tästä
{
    // luodaan  muuttujat
    int kanta = 7;
    int korkeus = 4;
    int ala = 4 * 7 / 2; // laskee suorakulmaisen kolmion alan
    printf("Kun kolmion kanta on %dm ja korkeus %dm, on kolmion ala %dm2.\n", kanta, korkeus, ala); // tulostaa vastauksen
    return 0; // funktion paluuarvo (suoritettiin onnistuneesti loppuun saakka)
}
