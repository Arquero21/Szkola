#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char osoba[20];
	cout<<"Przedstaw sie: ";
	cin.getline(osoba,20);                   //moze tez byc cin>>osoba;
	cout<<"juz wiem, jestes: "<<osoba<<endl;
	cin.ignore();
	getchar();
	return 0;
}
