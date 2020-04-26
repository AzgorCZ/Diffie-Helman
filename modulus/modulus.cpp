#include <iostream>
#include <array>
#include <math.h> 
using namespace std;


 double power(int cislo, int ex){
    int vysledek=1;
    for (int i = 1; i <= ex; i++) {
        vysledek = vysledek * cislo;
    }
    return vysledek;
}
int mod(int g, int tajne, int p) {
    int vyslcislo=0;
    double vysledek = 0;
    vysledek = power(g, tajne) / p;
    int vysledek1 = 0;
     vysledek1=vysledek;
    vysledek = vysledek - vysledek1;
    vyslcislo = round(vysledek * p);
    return vyslcislo;
}
int main()
{
    array<int, 2> tajne = {6,8};
    int g = 3;
    int p = 11;
    array <int, 2>vyslcislo = { 0,0 };
    array <int, 2> klic = { 0,0 };

    cout << "zde se vypisou prvni vysledky obou ucastniku \n";
    for (int i = 0; i < tajne.size(); i++) {
        vyslcislo[i] = mod(g, tajne[i], p);
        cout << i<<". "<<vyslcislo[i] << endl;
    }

    cout << "zde se vypise klic (2x pro kontrolu)\n";
    array<int, 2> gnew = {vyslcislo[1],vyslcislo[0]};
    for (int i = 0; i < tajne.size(); i++) {
        klic[i] = mod(gnew[i], tajne[i], p);
        cout << klic[i]<<endl;
    }
    

}