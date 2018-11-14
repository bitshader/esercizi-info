#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubble(int B[],int X);
main(){
	int const N = 100;
	int y,A[N];
	
	
	
	void bubble(A[y],N);
	for(y=0;y<N;y++){
		cout<<"\nnumeri ordinati-->"<<A[y];
	}

}

void bubble(int B[],int X){
	int i,sc; 
	bool k=false;
	srand(time(0));
	
	for(i=0;i<;i++){
		B[i]=rand()%100;
	}
	do{
		k=false;
		for(i=0;i<X-1;i++){
			if(B[i]>B[i+1]){
			sc=B[i];
			B[i]=B[i+1];
			B[i+1]=sc;
			k=true;		
			}
		}
	
	}while(k==true);
}
