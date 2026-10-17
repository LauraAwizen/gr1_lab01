

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //zad. 4. a i b
        float a, b;
    cout << "wprowadz liczby:" << endl;
    cin >> a;
    cin >> b;
    cout << a + b << endl;
    cout << a * b;

   // zad.5
        int x;
    cout << "podaj temp w farenhaitach:";
    cin >> x;
    double f = x;
    double c;
    c = 5.0 * (f - 32.0) / 9.0;
    cout << endl << f << " stopni Fahrenheita to " << c << " stopni Celsjusza";
   // zad.6

        string x;
    int wiek;
    cout << "podaj swoje imie i nazwisko:";
    getline(cin, x);
    cout << "podaj swoj wiek:";
    cin >> wiek;
    cout << endl << "Nazywasz sie " << x << " i masz " << wiek << " lat. ";


    //zad.7
        int a, b;
    cout << "wpisz 2 liczby:";
    cin >> a;
    cin >> b;
    cout << "suma:" << a + b << " roznica:" << a - b << " iloczyn:" << a * b << " iloraz:" << a / b << " r." << a % b;
   // zad.8

        double a, b;
    cout << "wpisz 2 liczby:";
    cin >> a;
    cin >> b;
    cout << "suma:" << a + b << " roznica:" << a - b << " iloczyn:" << a * b << " iloraz:" << a / b;
    //zad.9
        double r;
    cout << "podaj promien okregu:";
    cin >> r;
    cout << endl << "obwod:" << 2 * 3.1415926535 * r << " pole:" << 3.1415926535 * r * r;
    //zad.10

        double a, b;
    cout << "podaj dlugość prostokąta:";
    cin >> a;
    cout << "podaj szerokość prostokąta:";
    cin >> b;
    cout << "obwód:" << 2 * a + 2 * b << " pole:" << a * b;

    //zad.11

        double F, C;
        cout << "podaj temperaturę w stopniach celsjusza:";
        cin >> C;
        F = (9 * C / 5) + 32;
        cout << "temperatura w stopniach farhenhaita wynosi:" << fixed << setprecision(2) << F;

        //zad.12
            int s;
        cout << "podaj liczbę sekund:";
        cin >> s;
        cout << s << " sekund to " << s / 60 << " min " << s % 60 << " s ";
        //zad.13

            int min;
        cout << "podaj liczbę minut:";
        cin >> min;
        cout << min << " minut to " << min / 60 << " h " << min % 60 << " min ";

        //zad.14
            a)
            double a, b, c;
      cout << "podaj 3 liczby:";
      cin >> a >> b >> c;
      cout << "średnia:" << (a + b + c) / 3;
           // b)

           double a, b, c;
     cout << "podaj 3 liczby:";
     cin >> a >> b >> c;
     cout << "średnia:" << fixed << setprecision(1) << (a + b + c) / 3;
                //c)

            double a, b, c;
      cout << "podaj 3 liczby:";
      cin >> a >> b >> c;
      cout << "średnia:" << fixed << setprecision(2) << (a + b + c) / 3;
             // d)

           double a, b, c;
      cout << "podaj 3 liczby:";
      cin >> a >> b >> c;
      cout << "średnia:" << fixed << setprecision(4) << (a + b + c) / 3;

      //zad.15

         double cena;
         int sztuki;
      cout << "cena:";
      cin >> cena;
      cout << "liczba sztuk:";
      cin >> sztuki;
      cout << "razem:" << fixed << setprecision(2) << cena * sztuki;

             // zad.16
             // a)
         int a, b, c;
      cout << "podaj 3 liczby: ";
      cin >> a >> b >> c;
      cout << (a * b) / c;
             //  b)
         double a, b, c;
      cout << "podaj 3 liczby: ";
      cin >> a >> b >> c;
      cout << (a * b) / c;

             //zad.17
             //a)
         int x;
         string a;
      cout << "podaj liczbę i znak: ";
      cin >> x >> a;
      cout << x << " " << a;
            //b)
         int x;
         string a;
      cout << "podaj liczbę i znak: ";
      cin >> x >> a;
      cout << x << endl << a;
      if (a == "A") { cout << " <3"; }
      if (a == "B") { cout << " >:0"; }
      if (a == "C") { cout << " :):"; }

            //zad.18

         string imie, nazwisko;
      cout << "podaj imie: ";
      cin >> imie;
      cout << "podaj nazwisko: ";
      cin >> nazwisko;
      cout << "+------------------------------+" << endl;
      cout << "| IMIE:     " << setw(19) << left << imie << "|" << endl;
      cout << "| NAZWISKO: " << setw(19) << left << nazwisko << "|" << endl;
      cout << "+------------------------------+" << endl;

             // zad.19

      cout << "+-------------------------+" << endl;
      cout << "| nr   | " << setw(8) << left << "nazwa" << "|" << setw(8) << left << " cena" << "|" << endl;
      cout << "+-------------------------+" << endl;
      cout << "| 1    | " << setw(9) << left << "bułka" << "|" << setw(8) << left << " 2.00" << "|" << endl;
      cout << "+-------------------------+" << endl;
      cout << "| 2    | " << setw(8) << left << "mleko" << "|" << setw(8) << left << " 1.50" << "|" << endl;
      cout << "+-------------------------+" << endl;
      cout << "| 3    | " << setw(8) << left << "awokado" << "|" << setw(8) << left << " 6.50" << "|" << endl;
      cout << "+-------------------------+" << endl;

           // zad.20


           double x, y;
      cout << "podaj 2 liczby: ";
      cin >> x >> y;
      cout << "standardowe:" << x << "  " << y << endl;
      cout << "2 miejsca po przecinku: " << fixed << setprecision(2) << x << "  " << y << endl;
      cout << "w notacji naukowej: " << scientific << x << "  " << y << endl;

      return 0;
}
