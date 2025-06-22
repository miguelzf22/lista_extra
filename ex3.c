#include<stdio.h>

int main(){
    int a[10], i, j, aux, n, enc=0;
    printf("Valores de A:\n");
    for(i=0;i<10;++i){
        scanf("%i", &a[i]);
    }
    for(i=0;i<9;++i){
        for(j=i+1;j<10;++j){
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    printf("Valores de A ordenado em ordem crescente:\n");
    for(i=0;i<10;++i){
        printf("%i\n", a[i]);
    }
    printf("Insira numero para pesquisa:\n");
    scanf("%i", &n);
    for(i=0;i<10;++i){
        if(n==a[i]){
            enc=1;
            break;
        }
    }
    if(enc){
        printf("Numero encontrado na %i posicao", i+1);
    }
    else{
        printf("Numero nao encontrado");
    }
    return 0;
}