#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int A = 32;
	int K = 32;
	int Q = 32;
	int J = 32;
	int on = 32;
	int dokuz = 32;
	int sekiz = 32;
	int yedi = 32;
	int alti = 32;
	int bes = 32;
	int dort = 32;
	int uc = 32;
	int iki = 32;
	int y,el,kasanineli;
	double ihtimal,toplamkart,onbirihtimal,onihtimal,dokuzihtimal,sekizihtimal,yediihtimal,altiihtimal;
	char x;
	
	while (true)
	{
		cout << "kart giriniz" << endl;
		cin >> x;

		switch (x)
		{
		case 'A':A -= 1;
			break;
		case 'k':K -= 1;
			break;
		case 'q':Q -= 1;
			break;
		case 'j':J -= 1;
			break;
		case 'o':on -= 1;
			break;
		case 'D':dokuz -= 1;
			break;
		case 's':sekiz -= 1;
			break;
		case 'y':yedi -= 1;
			break;
		case 'a':alti -= 1;
			break;
		case 'b':bes -= 1;
			break;
		case 'd':dort -= 1;
			break;
		case 'u':uc -= 1;
			break;
		case 'i':iki -= 1;
			break;
		}
		if (x == 'g')
		{
			cout << "As:" << A << "\nPapaz:" << K << "\nKiz:" << Q << "\nVale:" << J << "\n10: " << on << "\n9: " << dokuz << "\n8: " << sekiz << "\n7: " << yedi << "\n6: " << alti << "\n5: " << bes << "\n4: " << dort << "\n3: " << uc << "\n2: " << iki << endl;
		}

		toplamkart = A + K + Q + J + on + dokuz + sekiz + yedi + alti + bes + dort + uc + iki;

		//Elini girdigin kisim

		if (x == 'h')
		{
			cout << "elinizi giriniz" << endl;
			cin >> el;
			y = 21 - el;

			if (y == 4)
			{
				ihtimal = (dort + uc + iki + A) / toplamkart;
				cout << ihtimal << endl;
			}
			else if (y == 5)
			{
				ihtimal = (bes + dort + uc + iki + A) / toplamkart;
				cout << ihtimal << endl;
			}
			else if (y == 6)
			{
				ihtimal = (alti + bes + dort + uc + iki + A) / toplamkart;
				cout << ihtimal << endl;
			}
			else if (y == 7)
			{
				ihtimal = (yedi + alti + bes + dort + uc + iki + A) / toplamkart;
				cout << ihtimal << endl;
			}
			else if (y == 8)
			{
				ihtimal = (sekiz + yedi + alti + bes + dort + uc + iki + A) / toplamkart;
				cout << ihtimal << endl;
			}
			else if (y == 9)
			{
				ihtimal = (dokuz + sekiz + yedi + alti + bes + dort + uc + iki + A) / toplamkart;
				cout << ihtimal << endl;
			}
		}

		//kasanin olasiliklari

		if (x == 'f')
		{
			cout << "kasanin elini giriniz" << endl;
			cin >> kasanineli;
			
			if (kasanineli == 6)
			{
              onbirihtimal = (A) / toplamkart;
			  cout << "kasanin 11 ve uzeri acma olasiligi : " << onbirihtimal << endl;
			}
			else if (kasanineli == 7)
			{
              onihtimal = (A + K + Q + J + on) / toplamkart;
			  cout << "kasanin 10 ve uzeri acma olasiligi : " << onihtimal << endl;

			}
			else if (kasanineli == 8)
			{
              dokuzihtimal = (A + K + Q + J + on + dokuz) / toplamkart;
			  cout << "kasanin 9 ve uzeri acma olasiligi : " << dokuzihtimal << endl;

			}
			else if (kasanineli == 9)
			{
              sekizihtimal = (A + K + Q + J + on + dokuz + sekiz) / toplamkart;
			  cout << "kasanin 8 ve uzeri acma olasiligi : " << sekizihtimal << endl;

			}
			else if (kasanineli == 10)
			{
              yediihtimal = (A + K + Q + J + on + dokuz + sekiz + yedi) / toplamkart;
			  cout << "kasanin 7 ve uzeri acma olasiligi : " << yediihtimal << endl;
			}
			else if (kasanineli == 11)
			{
              altiihtimal = (A + K + Q + J + on + dokuz + sekiz + yedi + alti) / toplamkart;
			  cout << "kasanin 6 ve uzeri acma olasiligi : " << altiihtimal << endl;

			}			
		}
	}
	return 0;
}