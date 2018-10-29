#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
const int massimo=100;

int dim_Colonne();
int dim_Righe();
void carica_matrice(A[massimo][massimo]);
void scarica_matrice(A[massimo][massimo]);

main()
{	
	
	int A[massimo][massimo];
	int Righe=dim_Righe();
	cout<<endl;
	int Colonne=dim_Colonne();
	cout<<endl;
	carica_matrice(A[Righe][Colonne],dim_Colonne,dim_Righe)
	cout<<endl;
	scarica_matrice(A[Righe][Colonne],dim_Colonne,dim_Righe)
	
	
	return 0;
}

int dim_Colonne()
{
	int numero;
	cout<<"numero colonne";
	cin>>numero;
	return numero;
}

int dim_Righe()
{
	int numero;
	cout<<"numero righe";
	cin>>numero;
	return numero;
}

void carica_matrice(int i,j,A[massimo][massimo])
{
	
	
	for(i=0;i<Righe;i++)
		{
		for(j=0;j<Colonne;j++)
			{
				cout<<"inserisci un numero della riga"<<i<<"e della colonna"<<j<<":";
				cin>>A[i][j];
			}
		}
}

void scarica_matrice(int i,j,A[massimo][massimo])
{

	for(i=0;i<Righe;i++)
		{
		
		for(j=0;i<Colonne;j++)
			cout<<"Numero:"<<A[Righe][Colonne];
		}

}
			
			
			
