#include <stdio.h>

int main() 
{   
    int codigo, quantidade; 
    float preco, total = 0;
    
    printf("Bem-vindo!\n");
    printf("Digite o código do produto (0 para finalizar): ");
    scanf("%d", &codigo);
    
    while (codigo != 0) {
        printf("Digite o preço do produto: ");
        scanf("%f", &preco);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &quantidade);
        
        total += preco * quantidade;  
        printf("Digite o código do próximo produto (digite 0 para finalizar): ");
        scanf("%d", &codigo);
    }
    printf("Total a pagar: R$ %.2f\n", total); 
    
    return 0;
}

