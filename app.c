#include <stdio.h>
#include <math.h>

int main()
{
    int codigo, quantidade;
    float preco, total = 0;
    printf("Bem-Vindo\n");
    printf("Digite o codigo do produto(0 para finalizar): ");
    scanf("%d", &codigo);
    
    while (codigo != 0) {
        printf("Digite a quantidade: ");
        scanf("%f");
        printf("Digite  quantidade de produto");
        scanf("%d" , &quantidade);
        
        total += preco *quantidade;
        printf("Digite o codigo do proximo produto: ");
        scanf("%d" , &codigo);
    }
    printf("Total da compra: R$%.2f\n", total);
    
    return 0;
}
