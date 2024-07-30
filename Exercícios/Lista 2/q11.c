#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int dados, int lados);

int main()
{
    int qtd_dados, qtd_lados;
    printf("Digite quantos dados deseja lancar: ");
    scanf("%d", &qtd_dados);
    printf("Agora digite a quantidade de lados do dado: ");
    scanf("%d", &qtd_lados);
    
    return 0;
}

int sorteio(int dados, int lados)
{
    srand(time(NULL)); 
    
    int sorteio;

    if(lados == 4)
    {
        for(int i=1;i<=dados;i++)
        {
            if(i == dados)
            {
                sorteio = rand()% (4 * i) + i;
            }
        }
    }
}