#include <stdio.h>
#include <stdlib.h>


void func (int *vetA,int *vetB,int *vetU){

for(int i=0;i<10;i++){
printf("Digite o valor do elemento [%d] do primeiro vetor: ",i+1);
scanf("%d", &vetA[i]);
vetU[i]=vetA[i];
}
 printf("\n");

for(int i=0;i<10;i++){
printf("Digite o valor do elemento [%d] do segundo vetor: ",i+1);
scanf ("%d",&vetB[i]);
vetU[i+10]=vetB[i];
}
printf("\nExibindo a uniao:");
for(int a=0;a<20;a++){
printf("\nValor %d do vetor uniao:%d",a+1,vetU[a]);

}


}

int main(void) {

int vetA[10],vetB[10],vetU[20];
int i,a;

func(vetA,vetB,vetU);
for(int i=0;i<10;i++){
}

for(int i=0;i<10;i++){

}

for (int a=0;a<20;a++){

}

 return 0;
 
 
}