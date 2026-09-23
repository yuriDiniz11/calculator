#include <stdio.h>

float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

//Para que a calculadora consiga calcular os números decimais, é necessário colocar as variáveis da função como float!

int main(){
			
    float a, b;
    char operador;

    printf("Digite um número para a: ");
    scanf("%f", &a);

    printf("Digite a operação (+, -, * ou /): ");
    scanf(" %c", &operador);

    printf("Digite um número para b: ");
    scanf("%f", &b);

    switch(operador)
    {
        case '+':
            float resultado1 = somar(a, b);
            printf("O resultado da soma é: %.2f\n", resultado1);
            break;
        
        case '-':
            float resultado2 = subtrair(a, b);
            printf("O resultado da subtração é: %.2f\n", resultado2);
            break;

        case '*':
            float resultado3 = multiplicar(a, b);
            printf("O resultado da multiplicação é: %.2f\n", resultado3);
            break;

        case '/':
            if(b != 0){
                float resultado4 = dividir(a, b);
                printf("O resultado da divisão é: %.2f\n", resultado4);
            }else{
                printf("ERROR 333: Divisão por zero!\n");
            }
            break;
        
        default:
            printf("Impossível prosseguirmos!\n");
            break;
    }

	return 0;
}	
