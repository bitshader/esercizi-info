#include <iostream>
#include <cstdlib>
#include <ctime>
int sum(int x,int y);
int sott(int x,int y);
int molt(int x,int y);
int divvv(int x,int y);
using namespace std;
main(){
	int a,b,somma,differenza,indice,y,divisione,moltiplicazione;
	bool x=false;
	cout<<"SCEGLIERE L'OPERAZIONE\n1-->\tADDIZIONE\n2-->\tSOTTRAZIONE\n3-->\tMOLTIPLICAZIONE\n4-->\tDIVISIONE\n";
	cin>>indice;
	
	switch(indice){
		case 1:
			while(x==false)
			{
			x=false;
			somma=sum(a,b);
			cout<<"\nLa somma e'\t"<<somma;
			cout<<"\nVuoi fare un'altra addizione?\n0 per continuare\n1per uscire dal programma";
			cin>>y;
			if(y=1){
			x=true;
			}
			else{
			x=false;}
			}
			break;
		case 2:
			while(x==false)
			{
			x=false;
			differenza=sott(a,b);
			cout<<"\nLa sottrazione e'\t"<<differenza;
			cout<<"\nVuoi fare un'altra sottrazione?\n0 per continuare\n1per uscire dal programma";
			cin>>y;
			if(y=1){
			x=true;
			}
			else{
			x=false;}
			}
			break;
		case 3:
			while(x==false)
			{
			x=false;
			moltiplicazione=molt(a,b);
			cout<<"\nLa moltiplicazione e'\t"<<moltiplicazione;
			cout<<"\nVuoi fare un'altra moltiplicazione?\n0 per continuare\n1per uscire dal programma";
			cin>>y;
			if(y=1){
			x=true;
			}
			else{
			x=false;}
			}
			break;
		case 4:
			while(x==false)
			{
			x=false;
			divisione=divvv(a,b);
			cout<<"\nLa divisione e'\t"<<divisione;
			cout<<"\nVuoi fare un'altra divisione?\n0 per continuare\n1per uscire dal programma";
			cin>>y;
			if(y=1){
			x=true;
			}
			else{
			x=false;}
			}
			break;	
	}
}
int sum(int x,int y){
	cout<<"Scegliere i due nuemeri da sommare\n\n";
	cin>>x>>y;
	int sum=x+y;
	return sum;
}
int sott(int x,int y){
	cout<<"Scegliere i due numeri da sottrarre\n\n";
	cin>>x>>y;
	int sott=x-y;
	return sott;
}

int molt(int x,int y){
	cout<<"Scegliere i due numeri da moltiplicare\n\n";
	cin>>x>>y;
	int moltt=x*y;
	return moltt;
}

int divvv(int x,int y){
	do{
	cout<<"Scegliere i due nuemeri da dividere\n\n";
	cin>>x>>y;
	}while(x ==0 || y ==0);
	int divv=x/y;
	return divv;
}
//fare divisione e moltiplicazione
