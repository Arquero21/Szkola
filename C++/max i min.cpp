#include <iostream>

using namespace std;
void Wczytaj(int,int[]);
void Wypisz(int,int[]);
void Minimum(int,int[]);

int main()
{
	cout<<"Podaj roamiar tablicy:";
	int x;
	cin>>x;
	int tabl[50];
	Wczytaj(x,tabl);
	Wypisz(x,tabl);
	Minimum(x,tabl);
	cout<<endl;
	system("pause");
	return 0;
}

void Wczytaj(int n,int tab[])
{
	for(int i=0;i<n;i++)
	{
		cout<<"podaj "<<i+1<<" liczbe: ";
		cin>>tab[i];	
	}
}

void Wypisz(int n,int tab[])
{
	cout<<"podales:";
	int i;
	for (i=0;i<n;i++)
	cout<<"tab["<<i<<"]="<<tab[i]<<endl;
}

void Minimum(int n,int tab[])
{
	int min,indexMin;
	min=tab[0];
	indexMin=0;
	for(int i=0;i<n;i++)
	if(min>tab[i])
	{
		min=tab[i];
		indexMin=i;
	}
	cout<<"Minimum: tab["<<indexMin<<"]="<<min;
}
