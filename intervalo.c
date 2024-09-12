#include <stdio.h>

void imprimirpares(int inicio, int fim)

{
    for (int i = inicio; i <= fim; i++)
    {
        if (i % 2 != 0)
        { printf("%d", i);
        }
    }
    
    printf("\n");
}


int main()
{
    int inicio, fim;
    printf("Digite o inicio do intervalo");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo");
    scanf("%d", &fim);
    printf("Numeros impares no intervalo de %d a %d:\n", inicio, fim);
    return 0;
}
