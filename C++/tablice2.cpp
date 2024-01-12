#include <iostream>
using namespace std; 
const int N = 10;
int main()
{
	int tab[N],i;
	for(i=0;i<N;i+=3)
	tab[i]=i;
	for(i=0;i<N;i+=3)
	cout<<"tab["<<i<<"] "<<tab[i]<<endl;
	return 0;
}
