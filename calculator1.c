#include <stdio.h>

int main(){
			
	float n1, n2, resultado;
    char operador;
			
    printf("Insira o primeiro número: ");
	scanf("%f", &n1);

    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador);

    printf("Insira o segundo número: ");
	scanf("%f", &n2);
	
        if(operador == '+'){
            resultado = n1 + n2;
        }else if(operador == '-'){
            resultado = n1 - n2;
        }else if(operador == '*'){
            resultado = n1 * n2;
        }else if(operador == '/'){
            resultado = n1 / n2;
        }else{
            printf("Bon voyage!");
        }
        
        printf("Resultado: %g\n", resultado);

    
				

	return 0;
}	
