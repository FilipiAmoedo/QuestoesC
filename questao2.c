#include <stdio.h>
#include<locale.h>

int Pot (int x,int y) {
	if(y==0)
	return 1;
	else return ( x*Pot(x,y-1));
	
}

int potencia (int x, int y ){
	int pot= 1;
	
while (y>0){
	pot = pot*x;
	y=y-1;
}
return pot;		
	}
	
void main( ) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int x, y;
	
	
	
	printf("\nDigite o valor da base:");
	scanf("%d",&x);

	 printf("\n");
	
	printf("\nDigite o valor do expoente:");
	scanf("%d",&y);
	
	
     printf("\nPotencia Recursiva = %d",Pot(x,y));
	  printf("\n");
     printf("\nPotencia recursiva = %d",potencia(x,y ));
  
}