#include <iostream> //importováí knihovny pro vstup a výstup.

using namespace std; //užívání jména rodiny příkazů.

string c = "C:\\> "; //deklarace globální proměnná.

void dos_copygh() {

    cout << "StichaSDOS" << endl << endl << endl << endl;

} //metoda pro výpis textu.

void prumer_pole() {


    double pole[5];
    int i;
    double soucet = 0;

    cout << "Napis 5 racionalnich cisel" << endl;

    cin >> pole[0] >> pole[1] >> pole[2] >> pole[3] >> pole[4];

    for(i = 0;i < 5; i++){

        soucet += pole[i];

    }

    double vysledek = soucet / 5;
    cout << "Prumr cisel = " << vysledek << endl;

} //metoda pro průměr prvků v poli.

void dvojnasobek_celeho_cisla() {

    int cislo;
    int dvojnasobek;

    cout << "Zadejte cele cislo" << endl;
    cin >> cislo;

    dvojnasobek = 2 * cislo;

    cout << dvojnasobek << endl;

}

void vetsi_ze_dvou_cisel() {

    int cislo1, cislo2;

    cout << "Zadej 2 cela cisla" << endl;
    cin >> cislo1 >> cislo2;

    if (cislo1 > cislo2){

        cout << cislo1 << " je vetsi nez " << cislo2;

    }else {

        cout << cislo2 << " je vetsi nez " << cislo1 << endl;

    }

}

void faktorial() {

    int faktorial, vysledek;

    cout << "napiste rad faktorialu" << endl;
    cin >> faktorial;
    vysledek = faktorial;

    for(int i = 1;i < faktorial;i++) {

        vysledek *= i;

    }

    cout << vysledek << endl;

}

int main() {

    string prikaz; //deklarace proměnné příkaz

    dos_copygh(); //spuštění metody pro výpis

    do { //cyklus do while
        cout << c;  //výpis proměnné
        cin >> prikaz; //načtení příkazu od uživatele

        if (prikaz == "exit") { //podmínka

            cout << "Nashledanou"; //výpis na obrazovku
            break; //ukončení cyklu
        }
        if (prikaz == "prumer_pole") {

            prumer_pole();

        }
        if (prikaz == "dvojnasobek_celeho_cisla") {

            dvojnasobek_celeho_cisla();

        }
        if (prikaz == "vetsi_ze_dvou_cisel") {

            vetsi_ze_dvou_cisel();

        }
        if (prikaz == "faktorial") {

            faktorial();

        }

    }while(true); //podmínka cyklu

    return 0; //navrácení hodnoty 0
} //hlavní metoda main.
