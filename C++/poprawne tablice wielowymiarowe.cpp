#include <iostream>
#include <iomanip>

using namespace std;

void wypelnij (float tab [2][3])
{
	 for (int i=0; i<2; i++)
	 {
	 	for (int j=0; j<3; j++)
	 	{
	 		cout << "Podaj wartosc elementu: ";
	 		cin >> tab[i][j];
		 }
	 }
}

void wyswietl(float tab[2][3])
{
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << setw(4)<<tab[i][j];
		}
		cout <<endl;
	}
}


int main()
{
	float tab1[2][3], tab2[2][3];
	wypelnij (tab1);
	wypelnij (tab2);
	cout << endl;
	wyswietl(tab1);
	cout <<endl;
	wyswietl(tab2);
	system("pause");
	return 0;
}
