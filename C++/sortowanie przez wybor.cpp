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
	int temp=a;
	a=b;
	b=temp;
}
void sortowaniePrzezWybor(int tab[],int rozmiar)
{
	int i,j,k,temp;
	for(int i=0;i<rozmiar;i++)
	{
		k=i;
		for (j=i+1;j<rozmiar;j++)    //w tej petli szukamy indeksu najmniejszego elementu
		if (tab[j]<tab[k])           //znajdujacego sie najbli¿ej pocz¹tku tablicy
	k=j;
	zamien(tab[k],tab[i]);
	}
}
int main()
{
	cout<<"POdaj rozmiar tablicy: ";
	int n;
	cin>>n;
	int tablica[100];
	srand(time(NULL));
	wypelnij(tablica,n);
	wyswietl(tablica,n);
	cout<<"Uwaga sortuje!"<<endl;
	sortowaniePrzezWybor(tablica,n);
	wyswietl(tablica,n);
	cout<<endl;
	system("pause");
	return 0;
}
