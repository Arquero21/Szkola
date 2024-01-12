#include <iostream>
using namespace std;
int Czy_pierwsza(int);
int main()
{
	system("cls");
	cout<<"Podaj liczbe:\n";
	int n;
	cin>>n;
	n<2 ? cout<<n<<" -ani pierwsza ani zlozona\n" :
	Czy_pierwsza(n) ? cout<<n<<" -liczba pierwsza\n" :
	cout<<n<<" -liczba zlozona\n";	
	system("pause");
	return 0;
}
int Czy_pierwsza(int n)
{
	bool pierwsza=true;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		pierwsza=false;
		cout<<i-1<<" obieg pentli\n";
	}
	if(pierwsza)
	return 1;
	else 
	return 0;
}

