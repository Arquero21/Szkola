#include <iostream>
#include <cmath>

using namespace std;

double funkcja(double x)
{
	return x*x;
}

double poleObszaru(int n, double a, double b)
{
	double P=0;
	double d=(b-a)/n;
	double x;
	for (int i=0; i<n; i++)
	{
	x=a+(d*i)+(d/2);
	P=P+d*fabs(funkcja(x));
	}
return P;
}
int main()
{
	int ilosc;
	double a, b;
	cout<<"Program oblicza pole obszaru organicznego";
	cout<<"wykresem funkcji w przedziale <a;b>";
	cout<<"Podaj wartosc lewego kranca przedzialu : a ";
	cin>>a;
	cout<<"Podaj wartosc prawego kranca przedzialu : b ";
	cin>>b;
	cout<<"Na ile przedzialow podzielic wujsciowy przedzial?: ";
	cin>>ilosc;
	cout<<"Wartoœæ pola: "<<poleObszaru(ilosc,a,b)<<endl;
	system("pause");
	return 0;
}

