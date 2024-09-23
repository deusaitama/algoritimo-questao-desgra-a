/*4) (10 pontos) Faça um programa que leia do usuário um número inteiro positivo n e exiba corretamente na
tela uma das mensagens:
(1,0) i) você digitou o número 1, que não é primo nem composto.
(4,0) ii) você digitou o número <n>, que é primo.
(5,0) iii) você digitou o número <n>, que é composto. Fatoração em primos: 𝑛 = 𝑝1 × … × 𝑝𝑘 .*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k=0;
    printf("Digite um numero n:");
    scanf("%i",&n);
    if(n==1){
        printf("Voce digitou o numero 1 que nao eh primo nem composto\n");
    }else{
        for(i=1;i<=n;i++){
            if(n%i==0){
                k++;
            }
        }
        if(k==2){
            printf("Voce digitou o numero <%i> que eh primo",n);
        }else{
            printf("Voce digitou o numero <%i> que eh composto. Fatoracao: %i = ",n,n);
            for(i=2;i<=n;){
                if(n%i==0){
                    n=n/i;
                    printf("%i * ",i);
                }else{
                    i++;
                }

            }
        }
    }
    printf("\b\b ");
    return 0;
}
