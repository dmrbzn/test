#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int p1can = 100, p2can = 100, hasarinput;
	
	while (p1can > 0 && p2can > 0)
	{
		int hasarihtimal = rand() % 100;
		srand(time(0));

		cout << "Sira P1'de,vermek istediginiz hasari giriniz" << endl;
		cin >> hasarinput;

		if (hasarihtimal < (100 - hasarinput))
		{
			p2can -= hasarinput;
			cout << "Hasar basarili\np2can : " << p2can << endl;
		}
		else if (hasarihtimal >= (100 - hasarinput))
		{
			cout << "Hasar basarisiz\np2can : " << p2can << endl;
		}

		cout << "Sira P2'de,vermek istediginiz hasari giriniz" << endl;
		cin >> hasarinput;

		if (hasarihtimal < (100 - hasarinput))
		{
			p1can -= hasarinput;
			cout << "Hasar basarili\np1can : " << p1can << endl;
		}
		else if (hasarihtimal >= (100 - hasarinput))
		{
			cout << "Hasar basarisiz\np1can : " << p1can << endl;
		}
	}
	if (p1can <=0)
	{
		cout << "p2 kazandi" << endl;
	}
	else if (p2can <=0)
	{
		cout << "p1 kazandi" << endl;
	}
}