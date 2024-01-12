#include <iostream>
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
int main()
{
	cout<<"Podaj rozmiar tablicy: ";
	int n,tablica[100];
	cin>>n;
	srand(time(NULL));
	wypelnij(tablica,n);
	wyswietl(tablica,n);
	cout<<"Uwaga! sortuje:";
	sortowaniebabelkowe(tablica,n);
	wyswietl(tablica,n);
	system("pause");
	return 0;
}
