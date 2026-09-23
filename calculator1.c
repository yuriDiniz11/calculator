#include <stdio.h>

int main(){
			
	float n1, n2, resultado;
    char operador;
			
    printf("Insira um n°.: ");
    scanf("%f", &n1);

    printf("Insira outro n°.: ");
    scanf("%f", &n2);

    printf("Insira a operação (+, -, * ou /): ");
    scanf("\n%c", &operador);

    switch(operador)
    {
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;
      
         case '-':
            resultado = n1 - n2; 
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        
        case '/':
            if (n2 != 0){
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            }else{
                printf("ERRO: Divisão por zero.\n");
            }


        default:
            printf("Operação inválida!\n");
            break;

    }

	return 0;
}	
