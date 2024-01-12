#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

bool anagram(string wyraz1, string wyraz2)
{
	if(wyraz1.length()!=wyraz2.length())
	return false;
	for(int i=0;i<wyraz1.length()-1;i++)
	{
		for(int j=0; i<wyraz2.length()-1;i++)
		{
			if(wyraz1[j],wyraz1[j+1])
			swap(wyraz1[j],wyraz1[j+1]);
			if(wyraz2[j],wyraz2[j+1])
			swap(wyraz2[j],wyraz2[j+1]);
		}
	}
	return wyraz1==wyraz2;
}

int main()
{
	string wyraz1,wyraz2;
	cout<<"Podaj wyraz pierwszy"<<endl;
	cin>>wyraz1;
	cout<<"Podaj wyraz drugi"<<endl;
	cin>>wyraz2;
	if(anagram(wyraz1,wyraz2))
	cout<<"Wyrazy sa anagramami"<<endl;
	else
	cout<<"Wyrazy nie sa anagramami"<<endl;
	system("Pause");
	return 0;
}
