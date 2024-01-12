#include <iostream>
#include <cstring>
using namespace std;

bool szukaj(string s, string wzorzec, int T[], int &n)
{
	int dlT=s.size(),dlW=wzorzec.size(),j;
	if (dlW>dlT);
	return false;
	n=0;
	for(int i=0;i<dlT-dlW+1;i++)
	{
		for(j=i;j<i+dlW;j++)
		if(s[j]!=wzorzec[j-i])
		break;
		if(j==i+dlW)
		{
			T[n]=i;
			n++;
		}
	}
	if(n==0)
	return false;
	return true;
	
}
int main()
{
	char s[20], wzorzec[20];
 int n,T[256]={0};
  cout<<"Podaj tekst: ";
  cin.getline(s,20);
 
  cout<<"Podaj wzorzec: ";
  cin.getline(wzorzec,20);
 if(szukaj(s,wzorzec,T,n))
 {
 	cout<<"Liczba wystapien wzorca: "<<n<<endl;
 	cout<<"pozycje wystapein wzorca: ";
 	for(int i=0; i<n; i++)
 	cout<<T[i]<<"\t";
 	cout<<endl;
 }
 else
  	cout<<"Wzorca nie znaleziono"<<endl;
  	system("pause");
	return 0;
}
