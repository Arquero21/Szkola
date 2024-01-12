#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

void wypelnij(int tab[],int rozmiar)
{
	for(int i=0;i<rozmiar;i++)
	tab[i]=rand()%21;
}
void wyswietl(int tab[],int rozmiar)
{
for(int i=0;i<rozmiar;i++)
cout<<tab[i]<<" ";	
}
void zamien(int &a,int &b)
{
	int temp=a;      //zamiana elementów
	a=b;             //a z b
	b=temp;          //z u¿yciem zmiennej pomocniczej temp
}
void sortowaniebabelkowe(int tab[],int n)
{
	for(int j=n-1;j>0;j--)
	{
		for (int i=0;i<j;i++)
		if(tab[i]>tab[i+1])
		 zamien(tab[i],tab[i+1]);
	}
}
int binarne( int poczatek, int koniec, int tab[],int szukany)
{
 if (poczatek<koniec)
 {
 	int srodek=(poczatek+koniec)/2;
 	if (tab[srodek]=szukany)
 return srodek;                             //element znaleziony
if (tab[srodek]>szukany)
 return binarne(poczatek,srodek,tab,szukany);
 else
 return binarne(srodek+1,koniec,tab,szukany);
 }
  return -1;                                 //element nie wystepuje w tablicy
}
int main()
{
	cout<<"Podaj rozmiar tablicy: ";
	int n;
	cin>>n;
	int tablica[100];
	srand(time(NULL));
	wypelnij(tablica,n);
	wyswietl(tablica,n);
	int tab[6]={1,2,3,4,5,6};
	int szuk;
	cout<<"Jakiego elementu szukasz? ";
	cin>>szuk;
	if (binarne(0,5,tab,szuk)==-1)
	cout<<"Elementu nie ma w tablicy";
	else
	cout<<"Element odnaleziono na pozycji "<<binarne(0,5,tab,szuk)+1<<endl;
	sortowaniebabelkowe(tablica,n);
	wyswietl(tablica,n);
	system("pause");
	return 0;
}

