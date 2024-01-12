#include <iostream>
using namespace std;
const int MAX=100;
bool rosnacy(int T[],int n)
{
	for(int i=0;i<n-1;i++)
	if(T[i]>=T[i+1])
	return false;
	return true;
}
int main()
{
	int T[MAX],n;
	cout<<"Podaj liczbe elementow tablicy: ";
	cin>>n;
	cout<<"Podaj elemety tablicy:"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<"T["<<i<<"] =";
		cin>>T[i];
	}
	if(rosnacy(T,n))
	cout<<"Ciag jest rosnacy"<<endl;
	else
	cout<<"Ciag nie jest rosnacy"<<endl;
	system("pause");
	return 0;
}
