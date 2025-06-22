#include<stdio.h>

int main(){
    int a[20], b[10]={0}, i, j;
    printf("Insira valores de A de 0 a 9:\n");
    for(i=0;i<20;++i){
        scanf("%i", &a[i]);
        if(a[i]>9||a[i]<0){
            printf("Numero invalido\n");
            return 0;
        }
    }
    for(i=0;i<10;++i){
        for (j=0;j<20;++j){
            if(a[j]==i){
                b[i]++;
            }
        }
    }
    for(i=0;i<10;++i){
        printf("O numero %i aparece %i vezes\n", i, b[i]);
    }
    return 0;
}