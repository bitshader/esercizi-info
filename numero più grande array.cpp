#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int funzione_massimo(int x,int y);
int funzione_caricamento_array(int indice,int X);
main(void){
	
	int const N = 5;
	int i,A[N],max;
	for(i=0;i<N;i++)
	{
	A[i]=funzione_caricamento_array(i,A);
	cin>>A[i];
	}
	for(i=0;i<N;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	cout<<"il numeto maggiore e"<<max;
}

int funzione_caricamento_array(int indice,int X){
	
	int const N=5;
	for(indice=0;indice<N;indice++)
	{
	cout<<"numero:";
	cin>>X[indice];
	return X[indice];
	}
}



int funzione_massimo(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}


