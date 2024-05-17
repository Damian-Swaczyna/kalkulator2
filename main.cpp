#include <iostream>
#include <stdio.h>
#include <cmath> // Dodana biblioteka dla funkcji sqrt i pow

int main(int argc, char const *argv[]) {
    float a = 0, b = 1; // Inicjalizacja zmiennych a i b
    char option = 0; // Zmienna do przechowywania wyboru użytkownika

    printf("Calculator\n");
    printf(" 1 - dodawanie a + b\n");
    printf(" 2 - dzielenie a / b\n");
    printf(" 3 - odejmowanie a - b\n");
    printf(" 4 - mnozenie a * b\n");
    printf(" 5 - pierwiastek kwadratowy z a\n");
    printf(" 6 - a podniesione do potęgi b\n");
    printf(" Twoj wybor? ");
    scanf(" %c", &option); // Odczyt wyboru użytkownika

    // Obsługa wejścia dla operacji pierwiastka kwadratowego
    if (option == '5') {
        printf(" Podaj a: ");
        while (scanf("%f", &a) != 1) { // Pętla do momentu wprowadzenia poprawnej liczby dla a
            printf("Blad: prosze podac liczbe.\n");
            while (getchar() != '\n'); // Czyszczenie bufora wejściowego
            printf(" Podaj a: ");
        }
    } else { // Obsługa wejścia dla pozostałych operacji
        printf(" Podaj a: ");
        while (scanf("%f", &a) != 1) { // Pętla do momentu wprowadzenia poprawnej liczby dla a
            printf("Blad: prosze podac liczbe.\n");
            while (getchar() != '\n'); // Czyszczenie bufora wejściowego
            printf(" Podaj a: ");
        }

        printf(" Podaj b: ");
        while (scanf("%f", &b) != 1) { // Pętla do momentu wprowadzenia poprawnej liczby dla b
            printf("Blad: prosze podac liczbe.\n");
            while (getchar() != '\n'); // Czyszczenie bufora wejściowego
            printf(" Podaj b: ");
        }
    }

    // Wykonanie wybranej operacji
    switch (option) {
        case '1': // Dodawanie
            printf(" Wynik a + b = %f\n", a + b);
            break;

        case '2': // Dzielenie
            if (b == 0) { // Sprawdzenie, czy b jest równe 0
                printf(" Wynik a / b jest niezdefiniowany\n");
            } else {
                printf(" Wynik a / b = %f\n", a / b);
            }
            break;

        case '3': // Odejmowanie
            printf(" Wynik a - b = %f\n", a - b);
            break;

        case '4': // Mnożenie
            printf(" Wynik a * b = %f\n", a * b);
            break;

        case '5': // Pierwiastek kwadratowy
            if (a < 0) { // Sprawdzenie, czy a jest mniejsze od 0
                printf(" Wynik sqrt(a) jest niezdefiniowany dla ujemnego a\n");
            } else {
                printf(" Wynik sqrt(a) = %f\n", sqrt(a));
            }
            break;

        case '6': // Potęgowanie
            printf(" Wynik a ^ b = %f\n", pow(a, b));
            break;

        default: // Nieprawidłowa opcja
            printf(" Wybrales nieprawidlowa opcje\n");
            break;
    }

    return 0; // Zakończenie programu
}
