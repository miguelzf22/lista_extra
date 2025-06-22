#include<stdio.h>
#include<string.h>

int main(){
    char frase[200], palavra[200], maiorpalavra[200];
    int i, j, tamanho=0, tamanho2=0;
    printf("Insira a frase:\n");
    fgets(frase, 200, stdin);
    for(i=0;i<200;++i){
        if(frase[i]!='\n'){
            if(frase[i]==' '){
                if(tamanho>tamanho2){
                    strcpy(maiorpalavra, palavra);
                    tamanho2=tamanho;
                }
                palavra[tamanho]='\n';
                tamanho=0;
            }
            else{
                palavra[tamanho]=frase[i];
                ++tamanho;
            }
        }
        else{
            if(tamanho>tamanho2){
                 strcpy(maiorpalavra, palavra);
                tamanho2=tamanho;
            }
            palavra[tamanho]='\n';
            tamanho=0;
            break;
        }
    }
    printf("A maior palavra eh %s com %i letras\n", maiorpalavra, tamanho2);
    return 0;
}