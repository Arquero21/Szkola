#include <iostream>

using namespace std;
void sito_Eratostenesa(int);
int tab[20000];

void sito_Eratostenesa(int x)
{
for(int i=2;i<=x;i++)
tab[i]=i;
for(int i=2;i<=x;i++)	
{
	for(int j=2;i<=x;i++)
	if (i*j<=x)
	tab[i*j]=0;
}
cout<<"W ciagu liczb do 1 do "<<x<<" liczbami pierwszymi sa:";
for(int i=1;i<=x;i++)
if(tab[i])
cout<<tab[i]<<",";
}
int main()
{
	int n;
cout<<"Podaj liczbe:";
cin>>n;
sito_Eratostenesa(n);
return 0;


	
}
