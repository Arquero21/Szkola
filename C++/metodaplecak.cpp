#include <iostream>

using namespace std:
const int MAX = 50;

void wczytaj (int W[],int C[],int n)
{
	
	cout<<"Podaj wartosci i wagi przedmiotow:"<<endl;
	for(int i=1,i<=n;i++)
	{
		cout<<i<<". wartosc=";
		cin>>W[i];
		cout<<"  waga=";
		cin>>C[i];
	}
}

int pakujPlecak(int W[],int C[],int n,int waga, int K[])
{
	int wynik=0;
	for(int i=1;i<=n;i++)
	{
		K[i]=waga/C[i];
		waga-=K[i]*C[i];
		wynik+=W[i]*K[i];
	}
	return wynik;
}

int main()
{
	int W[MAX],C[MAX],K[MAX],waga,n;
	cout<<"Podaj maksymalna wage plecaka: ";
	cin>>waga;
	cout<<"Podaj liczbe przedmiotow: ";
	cin>>n;
	wczytaj(W,C,N);
	cout<<"Wartosc plecaka = "<<pakujPlecak(W,C,n,waga,K)<<endl;
	cout<<"zapakowane przedmioty:"<<endl;
	for(int i=1;i<=n;i++)
	cout<<i<<": ilosc="<<K[i]<<" wartosc="<<W[i]<<" waga="<<C[i]<<endl;
	system("pause");
	return 0;
}
