//inserimento da tasiera 
//for(i=0;i<N;i++){
//printf("elementi");scanf("%d",a[i]);}
//caricarlo random serve la libreria #include<time.h>||srand(time(NULL));
//poi ricomicio con for		a[i]=rand()%6+1; 	numero da uno  a 6;
//poi un altro for per visualizzare 

#include<stdio.h>
#include<time.h>
#define N 5
main()
{
	int i,a[N],j,sc;
	srand(time(NULL));
	
	for(i=0;i<N;i++)
	{
	a[i]=rand()%5;
	printf("\n%d",a[i]);
	}
	for(j=i;j<N;j++)
		{
		if(a[i]>a[j])
			{
			sc=a[i];
			a[i]=a[j];
			a[j]=sc;		
			printf("%d",a[j]);
			scanf("%d",&a[j]);
			
			}
		
		
		}
							
		}
	
	







