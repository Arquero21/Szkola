#include <iostream>
#include<ctime>
#include<cstdlib>

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


int main()
{
	cout<<"Podaj rozmiar tablicy (mniejszy od 100): ";
	int n;
	cin>>n;
	int tablica[100];
	srand(time(NULL));
	wypelnij(tablica,n);
	wyswietl(tablica,n);
	cout<<endl;
	system("pause");
	return 0;
	
	
	
	
}	
