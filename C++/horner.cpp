#include <iostream>
using namespace std;

float HornerIt(int k,float tablicaWsp[],float x)
{
	int i;
	float wartosc=tablicaWsp[0];
	for (i=1;i<=k;i++)
	wartosc=wartosc*x+tablicaWsp[i];
	return wartosc;
}
int main()
{
	int stopien;
	float tab[10];
	float x;
	cout<<"Podaj stopien wielomianu: ";
	cin>>stopien;
	cout<<"Podaj wartosc argumentu dla ktorego obliczana jest wartosc wielomianu: ";
	cin>>x;
	cout<<"Podaj wspolczynniki wielomianu: ";
	for (int i=0;i<=stopien;i++)
	cin>>tab[i];
	cout<<"W("<<x<<") = "<<HornerIt(stopien,tab,x)<<endl;
	system ("pause");
	return 0;
}
