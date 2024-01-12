#include <iostream>
using namespace std;

int main()
{
	const int N=10;
	int liczba[N];
	for(int i=0;i<N;i++)
	{cout<<"Podaj liczbe"<<i<<": ";
	cin>>liczba[i];
	}
	for(int i=0;i<N;i++)
	cout<<"liczba["<<i<<"]= "<<liczba[i]<<endl;
	return 0;
}
