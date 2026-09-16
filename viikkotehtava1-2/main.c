/* Viikkotehtävä 1-2
 * . Tee C-kielinen ohjelma, joka muuntaa antamasi lämpötilan (Celsius asteina)
 * Farenheit -asteiksi.
 * Tulostusesimerkki:
 * Antamasi lämpötila __ on Farenheit asteina __.
*/
#include <stdio.h>

int main()
{
    // Luo muuttujat
    int temperatureInCelcius; // kokonaislukumuuttuja käyttäjän syöttämää lämpötilaa varten
    int temperatureInFarenheit; // kokonaislukumuuttuja laskettua lämpötilaa varten

    // Pyydä käyttäjää syöttämään lämpötila
    printf("Temperature (in Celsius): ");
    // Lue käyttäjän syöte muuttujaan
    scanf("%d", &temperatureInCelcius);
    // Muunna celsius farenheitiksi. Kaava (0°C × 9/5) + 32
    temperatureInFarenheit = (temperatureInCelcius * 9/5) + 32;
    // Tulosta Fahrenheit näytölle

    printf("Temperature %d Celsius is %d Fahrenheit.", temperatureInCelcius, temperatureInFarenheit);
    printf("Temperature %d Celsius is %d Fahrenheit.", temperatureInCelcius, (temperatureInCelcius * 9/5) + 32);

    return 0;
}
