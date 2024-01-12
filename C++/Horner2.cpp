#include <iostream>

using namespace std;

float HornerRek(int k,float tablicaWsp[],float a)
{
	if(k==0)
	return tablicaWsp[0];
	else
	return HornerRek(k-1,tablicaWsp,a)*a+tablicaWsp[k];
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
	cout<<"W("<<x<<") = "<<HornerRek(stopien,tab,x)<<endl;
	system ("pause");
	return 0;
}
