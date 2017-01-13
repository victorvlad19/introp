#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int alegere;

// PROTOTIPARE
//1
void Lungime ();
void Metrii ();
void Centimetrii();
//2
void Arie ();
void Hectare();
void MetriiPatrati();
//3
void  Volum ();
void Litrii ();
void Mililitrii ();
//4
void Timp ();
void Secunde ();
void Minute ();
void Ore ();
// 5
void Viteza ();
void Milepeora ();
void Kilometriipeora();
// 6
void Temperatura ();
void Celsius();
void Fahrenheit ();
// 7
void Masa ();
void Grame ();
void Kilograme ();
// 8
void Energie ();
void Calorii ();
void Gigacalorii ();
//9
void Presiune ();
void Atmosfere();
void Bari ();
//10
void Densitate ();
void Kgpemetrucub();
void Grampecentimetrucub();

//11
void Combustibil ();
void Milepergalon();
void Litriiper100km();

//12
void Exit ();


// ALEGERE OPTIUNE MENIU CU VERIFICARE
void Optiune (int inf,int sup){
    cout << "*---------------------------*" << endl;

    int i;
    char buffer[256];
    cout << "Alegeti optiunea:" << endl;
    fgets (buffer, 256, stdin);
    i = atoi (buffer);

    if (i>inf && i<sup) alegere = i;
    else {
        cout << "*---------------------------*" << endl;
        cout << "Optiunea nu exista"<<endl;
        Optiune(inf,sup);
    }
}

// MENIUL
void  Meniu(){
    cout << "*---------------------------*" << endl;
    cout << "*---------CONVERTOR---------*" << endl;
    cout << "*---------- MENIU ----------*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "*-| 1.  Lungime           --*" << endl;
    cout << "*-| 2.  Arie              --*" << endl;
    cout << "*-| 3.  Volum             --*" << endl;
    cout << "*-| 4.  Timp              --*" << endl;
    cout << "*-| 5.  Viteza            --*" << endl;
    cout << "*-| 6.  Temperatura       --*" << endl;
    cout << "*-| 7.  Masa              --*" << endl;
    cout << "*-| 8.  Energie           --*" << endl;
    cout << "*-| 9.  Presiune          --*" << endl;
    cout << "*-| 10. Densitate         --*" << endl;
    cout << "*-| 11. Cons. combustibil --*" << endl;
    cout << "*-| 12. Exit              --*" << endl;
    cout << "*---------------------------*" << endl;
    Optiune(0,13);
    if (alegere == 1) Lungime();
    if (alegere == 2) Arie ();
    if (alegere == 3) Volum();
    if (alegere == 4) Timp ();
    if (alegere == 5) Viteza ();
    if (alegere == 6) Temperatura();
    if (alegere == 7) Masa();
    if (alegere == 8) Energie();
    if (alegere == 9) Presiune();
    if (alegere == 10) Densitate();
    if (alegere == 11) Combustibil();
    if (alegere == 12) Exit();
}

// MAIN (NU MODIFICA)
int main() {
    Meniu();
    return 0;
}

//1 LUNGIME
void Lungime (){
    int numarLungime;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Lungime           --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Metrii: " << endl;
    cout << "2. Centimetrii: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarLungime;
    if (numarLungime == 1) Metrii();
    if (numarLungime == 2) Centimetrii();
    if (numarLungime == 3) Meniu();
    if (numarLungime == 4) Exit();
}

void Metrii () {
    int valoareMetrii;
    cout << "Scrie-ti valoarea in metrii:" << endl;
    cin >> valoareMetrii;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Inchi: " << valoareMetrii/0.0254 << endl;
    cout << "Centimetrii: " << valoareMetrii/0.010000 << endl;
    cout << "Milimetrii: " << valoareMetrii/0.0010000 << endl;
    cout << "Kilometrii: " << valoareMetrii/1000.0 << endl;
    cout << "Mile: " << valoareMetrii*0.00062137 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Lungime();
}

void Centimetrii () {
    int valoareCentimetrii;
    cout << "Scrie-ti valoarea in centimetrii:" << endl;
    cin >> valoareCentimetrii;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Inchi: " << valoareCentimetrii*0.39370 << endl;
    cout << "Metrii: " << valoareCentimetrii/100.00 << endl;
    cout << "Milimetrii: " << valoareCentimetrii/0.10000 << endl;
    cout << "Kilometrii: " << valoareCentimetrii/100000 << endl;
    cout << "Mile: " << valoareCentimetrii* 0.0000062137 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Lungime();
}

//2 ARIE
void Arie (){
    int numarArie;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Arie              --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Hectare: " << endl;
    cout << "2. Metrii patrati: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarArie;
    if (numarArie == 1) Hectare();
    if (numarArie == 2) MetriiPatrati();
    if (numarArie == 3) Meniu();
    if (numarArie == 4) Exit();
}

void Hectare () {
    int valoareHectare;
    cout << "Scrie-ti valoarea in hectare:" << endl;
    cin >> valoareHectare;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Metrii Patrati: " << valoareHectare*0.00010000 << endl;
    cout << "Kilometrii Patrati: " << valoareHectare/100.00 << endl;
    cout << "Inchi Patrati: " << valoareHectare*15500000 << endl;
    cout << "Yards la patrat: " << valoareHectare*11960 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Arie();
}

void MetriiPatrati () {
    int valoareMPatrati;
    cout << "Scrie-ti valoarea in Metrii Patrati:" << endl;
    cin >> valoareMPatrati;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Hectare: " << valoareMPatrati/10000 << endl;
    cout << "Kilometrii patrati: " << valoareMPatrati/1000000 << endl;
    cout << "Inchi patrati: " << valoareMPatrati*1550 << endl;
    cout << "Yards la patrat: " << valoareMPatrati*1.1960 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Arie();
}

// 3 VOLUM
void Volum (){
    int numarVolum;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Volum              --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Litrii: " << endl;
    cout << "2. Mililitrii: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarVolum;
    if (numarVolum == 1) Litrii();
    if (numarVolum == 2) Mililitrii();
    if (numarVolum == 3) Meniu();
    if (numarVolum == 4) Exit();
}

void Litrii () {
    int valoareLitrii;
    cout << "Scrie-ti valoarea in Litrii:" << endl;
    cin >> valoareLitrii;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Galoane: " << valoareLitrii*0.26417 << endl;
    cout << "Pinte: " << valoareLitrii*2.1134 << endl;
    cout << "Mililitrii: " << valoareLitrii/0.010000 << endl;
    cout << "Centilitrii: " << valoareLitrii/0.0010000 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Volum();
}

void Mililitrii () {
    int valoareMililitrii;
    cout << "Scrie-ti valoarea in Mililitrii:" << endl;
    cin >> valoareMililitrii;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Litrii: " << valoareMililitrii/1000.0 << endl;
    cout << "Pinte: " << valoareMililitrii*0.00026417 << endl;
    cout << "Galoane: " << valoareMililitrii*0.0021134 << endl;
    cout << "Centilitrii: " << valoareMililitrii/10.000 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Volum();
}
// 4 TIMP
void Timp (){
    int numarTimp;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Timp              --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Secunde: " << endl;
    cout << "2. Minute: " << endl;
    cout << "3. Ore " << endl;
    cout << "4. Inapoi la meniu" << endl;
    cout << "5. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarTimp;
    if (numarTimp == 1) Secunde();
    if (numarTimp == 2) Minute();
    if (numarTimp == 3) Ore();
    if (numarTimp == 4) Meniu();
    if (numarTimp == 5) Exit();
}

void Secunde () {
    int valoareSecunde;
    cout << "Scrie-ti valoarea in Secunde:" << endl;
    cin >> valoareSecunde;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Minute: " << valoareSecunde*0.016667 << endl;
    cout << "Ore: " << valoareSecunde*0.00027778 << endl;
    cout << "Zile: " << valoareSecunde*0.000011574 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Timp();
}

void Minute () {
    int valoareMinute;
    cout << "Scrie-ti valoarea in Minute:" << endl;
    cin >> valoareMinute;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Secunde: " << valoareMinute/0.016667 << endl;
    cout << "Ore: " << valoareMinute*0.016667 << endl;
    cout << "Zile: " << valoareMinute*0.00069444 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Timp();
}

void Ore () {
    int valoareOre;
    cout << "Scrie-ti valoarea in Ore:" << endl;
    cin >> valoareOre;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Secunde: " << valoareOre/0.00027778 << endl;
    cout << "Minute: " << valoareOre*60.000 << endl;
    cout << "Zile: " << valoareOre*0.041667 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Timp();
}

// 5 VITEZA
void Viteza (){
    int numarViteza;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Viteza            --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Mile pe ora: " << endl;
    cout << "2. Kilometrii pe ora: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarViteza;
    if (numarViteza == 1) Milepeora();
    if (numarViteza == 2) Kilometriipeora();
    if (numarViteza == 3) Meniu();
    if (numarViteza == 4) Exit();
}

void Milepeora(){
    int valoareMilepeOra;
    cout << "Scrie-ti valoarea in Mile pe ora:" << endl;
    cin >> valoareMilepeOra;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Kilometrii pe ora: " << valoareMilepeOra/1.609344 << endl;
    cout << "Metrii pe secunda: " << valoareMilepeOra*0.44704 << endl;
    cout << "Yards pe ora: " << valoareMilepeOra*1.760 << endl;
    cout << "Inchi pe ora: " << valoareMilepeOra*63.360 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Viteza();
}

void Kilometriipeora() {
    int valoareKilompeora;
    cout << "Scrie-ti valoarea in Kilometrii pe ora:" << endl;
    cin >> valoareKilompeora;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Centimetrii pe ora: " << valoareKilompeora*100.000 << endl;
    cout << "Inchi pe ora: " << valoareKilompeora/0.0000254 << endl;
    cout << "Metrii pe ora: " << valoareKilompeora*1.000 << endl;
    cout << "Yards pe ora: " << valoareKilompeora/0.0009144 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Viteza();
}

// 6 TEMPERATURA
void Temperatura (){
    int numarTemperatura;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Temperatura       --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Celsius: " << endl;
    cout << "2. Fahrenheit: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarTemperatura;
    if (numarTemperatura == 1) Celsius();
    if (numarTemperatura == 2) Fahrenheit ();
    if (numarTemperatura == 3) Meniu();
    if (numarTemperatura == 4) Exit();
}

void Celsius (){
    int valoareCelsius;
    cout << "Scrie-ti valoarea temperaturii in Celsius:" << endl;
    cin >> valoareCelsius;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Fahrenheit: " << (valoareCelsius * 1.8) + 32 << endl;
    cout << "Kelvin: " << valoareCelsius - 273.15 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Temperatura();
}

void Fahrenheit () {
    int valoareFahr;
    cout << "Scrie-ti valoarea temperaturii in Fahrenheit:" << endl;
    cin >> valoareFahr;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Celsius: " << ((valoareFahr - 32) * 5) / 9 << endl;
    cout << "Kelvin: " << (((valoareFahr - 32) * 5) / 9) + 273.15 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Temperatura();

}

// 7 MASA
void Masa (){
    int numarGreutate;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Masa/Greutate     --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Grame: " << endl;
    cout << "2. Kilograme: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarGreutate;
    if (numarGreutate == 1) Grame();
    if (numarGreutate == 2) Kilograme ();
    if (numarGreutate == 3) Meniu();
    if (numarGreutate == 4) Exit();
}

void Grame () {
    int valoareGrame;
    cout << "Scrie-ti valoarea in Grame:" << endl;
    cin >> valoareGrame;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Centigrame: " << valoareGrame * 100 << endl;
    cout << "Decagrame: " << valoareGrame * 10 << endl;
    cout << "Kilograme: " << valoareGrame * 1000 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Masa();
}

void Kilograme () {
    int valoareKilograme;
    cout << "Scrie-ti valoarea in Kilograme:" << endl;
    cin >> valoareKilograme;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Centigrame: " << valoareKilograme / 100000 << endl;
    cout << "Decagrame: " << valoareKilograme * 100 << endl;
    cout << "Grame: " << valoareKilograme * 1000 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Masa();
}

// 8 ENERGIE
void Energie (){
    int numarEnergie;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Energie           --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Calorii: " << endl;
    cout << "2. Gigacalorii: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarEnergie;
    if (numarEnergie == 1) Calorii();
    if (numarEnergie == 2) Gigacalorii();
    if (numarEnergie == 3) Meniu();
    if (numarEnergie == 4) Exit();
}

void Calorii () {
    int valoareCalorii;
    cout << "Scrie-ti valoarea in Calorii:" << endl;
    cin >> valoareCalorii;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Gigacalorii: " << valoareCalorii * 0.000000004184 << endl;
    cout << "Juli: " << valoareCalorii * 4.184 << endl;
    cout << "Kilojuli: " << valoareCalorii *  0.004184 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Energie();
}

void Gigacalorii () {
    int valoareGigacalorii;
    cout << "Scrie-ti valoarea in Gigacalorii:" << endl;
    cin >> valoareGigacalorii;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Calorii: " << valoareGigacalorii * 0.000000004184 << endl;
    cout << "Juli: " << valoareGigacalorii * 1000000000 << endl;
    cout << "Kilojuli: " << valoareGigacalorii *  1000000 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Energie();
}

// 9 PRESIUNE
void Presiune (){
    int numarPresiune;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Presiune          --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Atmosfere: " << endl;
    cout << "2. Bari: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarPresiune;
    if (numarPresiune == 1) Atmosfere();
    if (numarPresiune == 2) Bari();
    if (numarPresiune == 3) Meniu();
    if (numarPresiune == 4) Exit();
}

void Atmosfere(){
    int valoareAtomosfere;
    cout << "Scrie-ti valoarea in Atmosfere:" << endl;
    cin >> valoareAtomosfere;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Bari: " << valoareAtomosfere * 1.01325 << endl;
    cout << "Pascali: " << valoareAtomosfere * 101325 << endl;
    cout << "Kilopascali: " << valoareAtomosfere *  101.325 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Presiune();
}

void Bari () {
    int valoareBari;
    cout << "Scrie-ti valoarea in Bari:" << endl;
    cin >> valoareBari;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Atmosfere: " << valoareBari / 1.01325 << endl;
    cout << "Pascali: " << valoareBari * 100000 << endl;
    cout << "Kilopascali: " << valoareBari *  100 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Presiune();
}

// 10 DENSITATE
void Densitate (){
    int numarPresiune;
    cout << "*---------------------------*" << endl;
    cout << "*-|     Densitate         --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Kilogram pe metru cub (kg/m^3) " << endl;
    cout << "2. Gram pe centimetru cub (oz/in^3) " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarPresiune;
    if (numarPresiune == 1) Kgpemetrucub();
    if (numarPresiune == 2) Grampecentimetrucub();
    if (numarPresiune == 3) Meniu();
    if (numarPresiune == 4) Exit();
}

void Kgpemetrucub(){
    int valoareKGpeMetruCub;
    cout << "Scrie-ti valoarea in Kilograme pe metru cub:" << endl;
    cin >> valoareKGpeMetruCub;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Gram pe centimetru cub (kg/m^3): " << valoareKGpeMetruCub * 0.001 << endl;
    cout << "Ounch per inch cub (oz/in^3): " << valoareKGpeMetruCub * 0.000578 << endl;
    cout << "Pound per inch cub (lb/in^3): " << valoareKGpeMetruCub *  0.000036 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Densitate();
}

void Grampecentimetrucub(){
    int valoareGrampecentimetrucub;
    cout << "Scrie-ti valoarea in Grame pe centimetru cub:" << endl;
    cin >> valoareGrampecentimetrucub;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Ounch per inch cub (oz/in^3): " << valoareGrampecentimetrucub * 0.578 << endl;
    cout << "Pound per inch cub (lb/in^3): " << valoareGrampecentimetrucub *  0.036 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Densitate();
}

// 11 COMBUSTIBIL
void Combustibil (){
    int numarCombustibil;
    cout << "*---------------------------*" << endl;
    cout << "*-|  Consum Combustibil   --*" << endl;
    cout << "*---------------------------*" << endl;
    cout << "1. Mile per galon: " << endl;
    cout << "2. Litrii per 100km: " << endl;
    cout << "3. Inapoi la meniu " << endl;
    cout << "4. Exit" << endl;
    cout << "*---------------------------*" << endl;
    cout << "Alegeti optiunea:" << endl;
    cin >> numarCombustibil;
    if (numarCombustibil == 1) Milepergalon();
    if (numarCombustibil == 2) Litriiper100km();
    if (numarCombustibil == 3) Meniu();
    if (numarCombustibil == 4) Exit();
}

void Milepergalon (){
    int valoareMilepergalon;
    cout << "Scrie-ti valoarea in Mile per Galon:" << endl;
    cin >> valoareMilepergalon;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Litrii per 100km: " << valoareMilepergalon / 4.54609188 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Combustibil();
}

void Litriiper100km () {
    int valoarelitrii100km;
    cout << "Scrie-ti valoarea in Litrii per 100km:" << endl;
    cin >> valoarelitrii100km;
    cout << endl;
    cout << "*RASPUNS--------------------*" << endl << endl;
    cout << "Mile per Galon: " << valoarelitrii100km * 4.54609188 << endl;
    cout << endl;
    cout << "*---------------------------*" << endl << endl;
    std::this_thread::sleep_for( std::chrono::seconds{1});
    Combustibil();
}

// EXIT
void Exit () {
    cout << "*---------------------------*" << endl;
    cout << "VA MAI ASTEPTAM !" << endl;
    cout << "*---------------------------*" << endl;
    exit (EXIT_SUCCESS);
}