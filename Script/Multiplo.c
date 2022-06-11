#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if(x %3 ==0 || x %5 ==0 ){
        printf("Múltiplo de 3 ou 5");
    }else{
        printf("Não é múltiplo de 3 ou 5");
    }
    
    return 0;
}
