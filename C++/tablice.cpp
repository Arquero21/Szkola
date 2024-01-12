#include <iostream>
using namespace std;

int main()
{
	int tab[]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<=8;i++)
	cout<<"\nPodaje "<<i<<"-ty elementy tablicy: "<<tab[i];
	cout<<"\nA teraz adresy:\n";
	for(int i=0;i<=8;i++)
	cout<<"\nPodaje adres "<<i<<" -tego elememty tablicy: "<<& tab[i];
	cout<<endl;
	system("pause");
	return 0;
	
}
