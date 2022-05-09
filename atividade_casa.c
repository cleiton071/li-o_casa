#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float vf=0,pd=28,por=45,vc=0;
	
	printf("informe o valor de fábrica do carro: ");
	scanf("%f",&vf);
	
	vc=vf+(((vf/100)*pd)+((vf/100)*por));
	
	printf("\no valor do carro para o consumidor é de: ¨%.2f""\n",vc);
	return 0;
}
