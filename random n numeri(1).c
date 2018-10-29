#include<stdio.h>
#include<time.h>
main()

{
	
	int N;
	printf("quanti numeri?");	//iniziallizzazione della array1
	scanf("%d",&N);
	
	int i,a[N],sum=0,min=10000,sc;
	float media;					//iniziallizzazione delle variabili
	
	srand(time(NULL));			//funzione per creare numero
	
	for(i=0;i<N;i++)			//ciclo for di ingresso
	{
		a[i]=(rand()%15+1);
		
		sum=sum+a[i];			//assegnazione valore a sum
		media=(float)sum/N;		//assegnazione valore a media
	}
	
	for(i=0;i<N;i++)			//scorre l'array e cerca il valore minimo
	{
	if(a[i]<min)
		{
			min=a[i];
				
		}
	}
	
	for(i=0;i<N;i++)			//ciclo for di uscita
	{
		
		printf("\nnumeri:%d",a[i]);
		
		
	}
	
	printf("\nminore %d",min);	//min uscita
	printf("\nsomma %d",sum);	//sum uscita
	printf("\nmedia %f",media);	//media uscita

}	

