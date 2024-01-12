#include <iostream>
#include <cstring>
using namespace std;
  
  string sortuj (string s)
  {
  	char pom;
  	for(int j=s.size()-1;j>0;j--)
  	{
  		for (int i=0;i<j;i++)
  		if (s[i]>s[i+1])
	  { 
	pom=s[i];
	s[i]=s[i+1];
	s[i+1]=pom;  
  	 }
	}
 return 0;
}
int main()
  {
  	string s;
  	cout<<"podaj tekst baz spacji:"<<endl;
  	cin>>s;
  	cout<<"pososrtowany tekst:"<<sortuj(s)<<endl;
  	system("pause");
  	return 0;
  }
