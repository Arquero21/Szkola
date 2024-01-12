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
void sortowaniePrzezWstawianie(int tab[],int rozmiar)
{
	int i,k,elem;
	for(int i=0;i<rozmiar;i++)
	{
		elem=tab[i];
		k=i-1;
		while (k>=0 && tab[k]>elem);
		{
			tab[k+1]=tab[k]>elem;
			k--;
		}
		tab[k+1]=elem;
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
	sortowaniePrzezWstawianie(tablica,n);
	wyswietl(tablica,n);
	cout<<endl;
	system("pause");
	return 0;
}
