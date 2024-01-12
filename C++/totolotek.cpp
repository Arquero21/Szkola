#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
	system("cls");
	int pula,n,i;
	char odp;
	do
{

cout<<"Z ilu liczb wylosowac?\n";
cin>>pula;
cout<<"Ile liczb wylosowaæ?\n";
cin>>n;
srand(time(NULL));
for (i=1;i<=n;i++)
cout<<"Liczba"<<i<<": "<<rand()%pula<<endl;
cout<<"\n\nPowtrzyc?\n(t/n)";
cin>>odp;
}
while(odp=='t');
return 0;
}
