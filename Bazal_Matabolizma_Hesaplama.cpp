#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double b, k, y,bme,bmk,gun,kilo;
    double bazal,a,kv,ka,g,ag,kar,adim,harckcal,alinankcal, kvbolubirkilo, kabolubirkilo;
    char c,d,s,q; 
        
        cout << "Oo--oO\tGym409 Beta 3.1.1'a hosgeldiniz\tOo--oO\n" << endl;
        cout << "->Bu program bazal metabolizmanizi cinsiyetinize gore hesaplayabilir.\n->Harcadiginiz ve aldiginiz kalorileri kalori yakiminizla karsilastirir.\n->Hedefinizi ogrenip hedefinize ulasip ulasamayacaginiz belirler.\n->Size tavsiyelerde bulunabilir." << endl;         
    
        while (true)
    {
        cout << "\nLutfen cinsiyetinizi giriniz(k,e)\n";
        cin >> c;
        cout << "Boyunuzu giriniz\n";
        cin >> b;
        cout << "Kilonuzu giriniz\n";
        cin >> k;
        cout << "Yasinizi giriniz\n";
        cin >> y;

        bme = 66.47 + (13.75 * k) + (5 * b) - (6.76 * y);
        bmk = 655.10 + (9.56 * k) + (1.85 * b) - (4.68 * y);

        if (c == 'e')
        {
            cout << "Bazal metabolizmaniz:" << bme << "kcal\n\n";
        }
        else if (c == 'k')
        {
            cout << "Bazal metabolizmaniz:" << bmk << "kcal\n\n";
        }
        else
        {
            cout << "Hatali giris yaptiniz";
        }

        if (c == 'e')
        {
            bazal = bme;
        }
        else if (c == 'k')
        {
            bazal = bmk;
        }
    secondstage:

        cout << "Kilo almaya calisiyorsan(+), vermek istiyorsan (-)'yi giriniz"<< endl;
        cin >> d;
        
        //kilo verme
        if (d == '-')
        {        
            cout << "Kac gunluk zayiflama plani yapmak istersiniz?" << endl;
            cin >> gun;
            cout << gun <<" Gunde kac kilo vermek istersiniz?" << endl;
            cin >> kilo;

            cout << "Spor salonuna gidiyor musun(y,n)?"<<endl;
            cin >> s;
            if (s == 'y')
            {
                cout << "Haftada kac gun gidiyorsun?"<< endl;
                cin >> g;
                cout << "Kac dakika agirlik calisiyorsun?"<<endl;
                cin >> ag;
                cout << "Kardiyoda kac kcal yakiyorsun?"<<endl;
                cin >> kar;
                cout << "Gunde kac adim atiyorsun?"<<endl;
                cin >> adim;
                cout << "Gunde kac kalori aliyorsun?"<<endl;
                cin >> a;

                harckcal = ((g * ag*4) + (g * kar) + (7 * (adim/20)) + (7 * bazal))-(7*a);
              
                kv = (harckcal*(gun/7)) - (7400*kilo);
                kvbolubirkilo = kv / 7400;
               
                if (kv >= 0)
                {
                    cout << "Hedefinize basariyla ulasacaksiniz." << endl;
                    cout << "Hedeflediginiz surede fazladan " << setprecision(2) << kvbolubirkilo << " kilo verebilirsiniz" << endl;
                }
                else if (kv < 0)
                {
                    cout << "Hedefinize uzaksiniz." << endl;
                    
                    if (g <=3)
                    {
                        cout << "Spora gittiginiz gun sayisini arttirablirsiniz." << endl;
                    }
                    if (kar < 250)
                    {
                        cout << "Sporda kardiyo temponuzu ve/veya surenizi arttirabilirsiniz." << endl;
                    }
                    if (adim < 5000)
                    {
                        cout << "Daha fazla adim atabilirsiniz." << endl;
                    }
                    if (a >= bazal)
                    {
                        cout << "Fazla kalori aliyorsunuz,kalori aliminizi dusurebilirsiniz." << endl;
                    }
                }                          
            }
            else if (s == 'n')
            {
                cout << "Gunde kac adim atiyorsun?" << endl;
                cin >> adim;
                cout << "Gunde kac kalori aliyorsun?" << endl;
                cin >> a;

                harckcal = ((7*(adim / 20)) + (7*bazal)) - (7*a);
                kv = (harckcal * (gun / 7)) - (7400 * kilo);
                kvbolubirkilo = kv / 7400;
                
                if (kv >= 0)
                {
                    cout << "Hedefinize basariyla ulasacaksiniz." << endl;
                    cout << "Hedeflediginiz surede fazladan " <<setprecision(2)<< kvbolubirkilo << " kilo verebilirsiniz" << endl;
                }
                else if (kv < 0)
                {
                    cout << "Hedefinize uzaksiniz." << endl;
                    
                    if (adim < 5000)
                    {
                        cout << "Daha fazla adim atabilirsiniz." << endl;
                    }
                    if (a >= bazal)
                    {
                        cout << "Fazla kalori aliyorsunuz,kalori aliminizi dusurebilirsiniz." << endl;
                    }
                }
            }            
        }
       //kilo alma
        else if (d == '+')
        {
            cout << "Kac gunluk kilo alma plani yapmak istersiniz?" << endl;
            cin >> gun;
            cout << gun << " Gunde kac kilo almak istersiniz?" << endl;
            cin >> kilo;
               
            cout << "Spor salonuna gidiyor musun(y,n)?" << endl;
            cin >> s;

            if (s == 'y')
            {
                cout << "Haftada kac gun gidiyorsun?" << endl;
                cin >> g;
                cout << "Kac dakika agirlik calisiyorsun?" << endl;
                cin >> ag;
                cout << "Kardiyoda kac kcal yakiyorsun?" << endl;
                cin >> kar;
                cout << "Gunde kac adim atiyorsun?" << endl;
                cin >> adim;
                cout << "Gunde kac kalori aliyorsun?" << endl;
                cin >> a;

                alinankcal = (7 * a) - ((g * ag * 4) + (g * kar) + (7 * (adim / 20)) + (7 * bazal));
                
                ka = alinankcal*(gun/7) - (7400*kilo);
                kabolubirkilo = ka / 7400;

                if (ka >= 0)
                {
                    cout << "Hedefinize basariyla ulasacaksiniz." << endl;
                    cout << "Hedeflediginiz surede fazladan " << setprecision(2) << kabolubirkilo << " kilo alabilirsiniz" << endl;
                }
                else if (ka < 0)
                {
                    cout << "Hedefinize uzaksiniz." << endl;
                  
                    if (kar > 250)
                    {
                        cout << "Kardiyo surenizi ve/veya temponuzu biraz azaltabilirsiniz";
                        cout << "(Kardiyo saglik acisindan onemlidir bu yuzden kardiyoyu azaltmak yerine aldiginiz kaloriyi arttirabilirsiniz)." << endl;
                    }              
                    if (a <= (bazal*1.2))
                    {
                        cout << "Az kalori aliyorsunuz, kalori alimini arttirablirsiniz." << endl;
                    }
                }
            }
            else if (s == 'n')
            {
                cout << "Gunde kac adim atiyorsun?" << endl;
                cin >> adim;
                cout << "Gunde kac kalori aliyorsun?" << endl;
                cin >> a;

                alinankcal = (7 * a) - (7 * (adim / 20)) + (7 * bazal);
 
                ka = alinankcal * (gun / 7) - (7400 * kilo);
                kabolubirkilo = ka / 7400;

                if (ka >= 0)
                {
                    cout << "Hedefinize basariyla ulasacaksiniz." << endl;
                    cout << "Hedeflediginiz surede fazladan " << setprecision(2) << kabolubirkilo << " kilo alabilirsiniz" << endl;
                }
                else if (ka < 0)
                {
                    cout << "Hedefinize uzaksiniz." << endl;

                    if (a < bazal)
                    {
                        cout << "Aldiginiz kalori miktarini arttirablirsiniz." << endl;
                    }
                }
            }
        }
        cout << "\nBir onceki asamaya donmek icin 'p'ye, en basa donmek icin herhangi bir tusa basabilirsiniz" << endl;
        cin >> q ;

        if (q == 'p')
        {
            goto secondstage;
        }
    }
    return 0;
}