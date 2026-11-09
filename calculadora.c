#include <stdio.h>

int main() {
char opcao[100];
char continuar = 'S';
 double num1, num2, resultado;
  while (continuar == 'S' || continuar == 's') {
    printf("============================\n");
        printf("       CALCULADORA\n");
       printf("============================\n");
        printf("1 - Adicao\n");
     printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
     printf("4 - Divisao\n");
        printf("5 - Sair\n");
       printf("============================\n");
      printf("Escolha uma opcao: ");

 scanf("%99s", opcao);
 
if (opcao[1] != '\0' || opcao[0] < '1' || opcao[0] > '5') {
            printf("Opcao invalida! Tente novamente.\n\n");
            continue;
        } if (opcao[0] == '5') {
            printf("Obrigado por usar a calculadora. Ate a proxima!\n");
            break;
        }  printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);
   printf("Digite o segundo numero: ");
        scanf("%lf", &num2);
  if (opcao[0] == '1') {
            resultado = num1 + num2;
            printf("Resultado: %g + %g = %g\n", num1, num2, resultado);
        }  else if (opcao[0] == '2') {
            resultado = num1 - num2;
            printf("Resultado: %g - %g = %g\n", num1, num2, resultado);
        } else if (opcao[0] == '3') {
            resultado = num1 * num2;
            printf("Resultado: %g * %g = %g\n", num1, num2, resultado);
        } else if (opcao[0] == '4') {
            if (num2 == 0) {
                printf("Erro: divisao por zero nao e permitida.\n");
            }  else {
                resultado = num1 / num2;
                printf("Resultado: %g / %g = %g\n", num1, num2, resultado);
            }
        }

        do {
            printf("Deseja realizar outra operacao? (S/N): ");
            scanf(" %c", &continuar);

            if (continuar != 'S' && continuar != 's' &&
                continuar != 'N' && continuar != 'n') {
                printf("Resposta invalida! Digite S ou N.\n");
            }

        } while (continuar != 'S' && continuar != 's' &&
                 continuar != 'N' && continuar != 'n');

        if (continuar == 'N' || continuar == 'n') {
            printf("Obrigado por usar a calculadora. Ate a proxima!\n");
        }
    }

    return 0;
}
