#include<stdio.h>

int main(){
    int a[5][5], i, j, b[5], c[5];
    printf("Valores de A:\n");
    for(i=0;i<5;++i){
        printf("Linha %i:\n", i+1);
        for(j=0;j<5;++j){
            scanf("%i", &a[i][j]);
        }
    }
    for(j=0;j<5;++j){
        b[j]=0;
        for(i=0;i<5;++i){
            b[j]=a[i][j]+b[j];
        }
    }
    for(i=0;i<5;++i){
        c[i]=0;
        for(j=0;j<5;++j){
            c[i]=a[i][j]+c[i];
        }
    }
    printf("Soma linhas \t Soma colunas \n");
    for(i=0;i<5;++i){
        printf("%i \t\t %i \n", c[i], b[i]);
    }
    return 0;
}