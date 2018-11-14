#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int somma(int x,int y,int somma);

main(){
	int a,b,sum;
	
	cout<<"valori dei numeri";
	cin>>a>>b;
	
	sum=somma(a,b,sum);
	cout<<"la somma e: \t"<<sum;
}

int somma(int x,int y,int somma){
	
	somma=x+y;
	return somma;
}
