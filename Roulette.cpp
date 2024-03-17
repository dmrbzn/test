#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() 
{        
    char x,secim;
    int bakiye;
    int bahis;
    int bakiyeyukleme;
    
    cout << "Roulette409'a hosgeldiniz\n" << endl;
    cout << "bakiye yukleyiniz" << endl;

    cin >> bakiyeyukleme;
    
    bakiye = bakiyeyukleme;

    while (true)
    {
        int renk = rand() % 100;
        srand(time(0));
        cout << "bakiyeniz : " << bakiye << endl;
        
        cout << "Bahis seciniz" << endl;
        cin >> bahis;
        cout << "bir renk seciniz" << endl;
        cin >> secim;

        if (renk < 48)
        {
            if (secim == 'k')
            {
                bakiye += bahis;
            }
            else if (secim == 's')
            {
                bakiye -= bahis;
            }
            else if (secim == 'y')
            {
                bakiye -= bahis;
            }
            cout << "Gelen Renk kirmizi" << endl;
        }
        else if (renk >= 48 && renk < 96)
        {
            if (secim == 'k')
            {
                bakiye -= bahis;
            }
            else if (secim == 's')
            {
                bakiye += bahis;
            }
            else if (secim == 'y')
            {
                bakiye -= bahis;
            }
            cout << "Gelen Renk siyah" << endl;
        }
        else
        {
            if (secim == 'k')
            {
                bakiye -= bahis;
            }
            else if (secim == 's')
            {
                bakiye -= bahis;
            }
            else if (secim == 'y')
            {
                bakiye += (bahis*25);
            }

            cout << "Gelen Renk yesil" << endl;
        }
    }  
    return 0;
}