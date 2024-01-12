#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdio>

using namespace std;

const int N=19;    //liczba elementów w sortowanym zbiorze

void Merge(int d[], int pocz, int kon)    //Funkcja scalania (merge)
{
int i, i1, i2, sr;
int temp[N];      //tablica pom. , do niej przepiszemy elementy tablicy
for (i=0;i<N;i++)
temp[i] = d[i];
sr = (pocz+kon)/2;
i=pocz;   //indeks "wedrujacy" po tablicy 
i1=pocz;  //indeks "wedrujacy" po pierwszej poloweie tablicy temp
i2= sr+1; //indeks "wedrujacy" po drugiej polowie tablicy temp
while (i1<=sr && i2<=kon)
{
	if (temp[i1]<temp[i2])
	{
		d[i]= temp[i1];
		i1++;
	}
	else
	{
		d[i]= temp[i2];
		i2++;
	}
	i++;

	if(i1>sr)
	while(i2<=kon)
	{
		d[i] = temp[i2];
		i2++;i++;
	}
	else
	while (i1<=sr)
	{
		d[i]=temp[i1];
		i1++; i++;
	}
}
}
void MergeSort(int d[], int pocz, int kon)
{
	int sr;
	sr=(pocz+kon)/2;
	if(pocz<sr)
	MergeSort(d,pocz,sr);
	if(sr+1<kon)
	MergeSort(d,sr+1,kon);
	Merge(d,pocz,kon);
}


int main()
{
	int d[N],i;
	cout<<"Przed sortowaniem:";
	for (i=0; i<N;i++)
	{
		d[i]=rand()%100;
		cout<<setw(4)<<d[i];
	}
	cout<<endl<<endl;
	MergeSort(d,0,N-1);
	cout<<"Po sortowaniu:";
	for(i=0; i<N;i++)
	cout<<setw(4)<<d[i];
	cout<<endl<<endl;
	getchar();
	return 0;
}
