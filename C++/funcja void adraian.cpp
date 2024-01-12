#include <iostream>
using namespace std;
void wpisz(int tab[],int rozmiar)
{
	cout<<"Podaj liczbe:";
	for(int i=0;i<rozmiar;i++)
	cin>>tab[i];
}
void wypisz(int tab[],int rozmiar)
{
	cout<<"Wypisuje liczby:";
	for(int i=0;i<rozmiar;i++)
	cout<<"tab["<<i<<"]="<<tab[i]<<endl;
}
void wypiszWspak(int tab[],int rozmiar)
{
	cout<<"Wypisz liczby odwrotnej kolejnosci:";
	for(int i=rozmiar-1;i>=0;i--)
	cout<<"tab["<<i<<"]="<<tab [i]<<endl;
}
int main()
{
	int n,tablica[10];
	cout<<"Podaj ile liczb chcesz wprowadzic: ";
	cin>>n;
	wpisz(tablica,n);
	wypisz(tablica,n);
	wypiszWspak(tablica,n);
	cout<<endl;
	system("pause");
	return 0;
}
