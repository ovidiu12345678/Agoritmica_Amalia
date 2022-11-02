#include <iostream>
using namespace std;

int main()
{
     CitireNoteElev(int primaNota, int ceaDeaDouaNota, int ultimaNota);

     CalculeazaMediaElev(int peimaNota, int ceaDeaDuaNota, int ultimaNota, int rezultatMedieElev);

     Tipareste();
}

static void CitireNoteElev(int primaNota, int ceaDeaDouaNota, int ultimaNota)
{
    cout << "Introduce-ti prima nota acordata elevu-lui ! ";
    cin >> primaNota;

    cout << "Introduce-ti cea de-a doua nota !";
    cin >> ceaDeaDouaNota;

    cout << "Introduce-ti ultima nota acordata elevu-lui !";
    cin >> ultimaNota;

}

int CalculeazaMediaElev(int primaNota, int ceaDeaDouaNota, int ultimaNota, int rezultatMedieElev)
{
    rezultatMedieElev = 0;
    rezultatMedieElev = (primaNota + ceaDeaDouaNota + ultimaNota) / 3;

    return rezultatMedieElev;
}

static void Tipareste()
{
    cout << "Media obtinuta a elevului este : " << "  " << CalculeazaMediaElev;
}