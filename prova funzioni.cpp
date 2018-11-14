#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int funzione_massimo(int x,int y);

int	main(void){
	
	int a,b,massimo;
	cout<<"numero-->";
	cin>>a;
	cout<<"numero-->";
	cin>>b;
	massimo=funzione_massimo(a,b);
	cout<<"numero massimo-->"<<massimo;
	
	
}

int funzione_massimo(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}
