#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void selection_sort(int B[],int dim);

int main(){
	int const N = 5;
	
	int i,j;
	int A[N];
	selection_sort(A,N);
	for(i=0;i<N;i++){
	cout<<"\nNumeri array ordinati:"<<A[i];}
}

void selection_sort(int B[],int dim){

	
	int x,y,sc;
	int A[dim];
	srand(time(0));
	
	for(x=0;x<dim;x++){
	B[x]=rand();}
	
	for(x=0;x<dim-1;x++)
		for(y=x+1;y<dim;y++){
			if(B[x]>B[y]){
				sc=B[x];
				B[x]=A[y];
				B[y]=sc;
	
	}
	
}	
}


