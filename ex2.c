#include<stdio.h>

int main(){
	int a[15], i, j, aux;
	printf("Valores de A\n");
	for(i=0;i<15;++i){
		scanf("%i", &a[i]);
	}
	for(i=0;i<14;++i){
		for(j=i+1;j<15;++j){
			if(a[i]>a[j]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	printf("Valores de A ordenados em ordem crescente:\n");
	for(i=0;i<15;++i){
		printf("%i\n", a[i]);
	}
	return 0;
}