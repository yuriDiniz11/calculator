#include <stdio.h>

int somar(float a, float b){
    return a + b;
}

int subtrair(float a, float b){
    return a - b;
}

int multiplicar(float a, float b){
    return a * b;
}

int dividir(float a, float b){
    return a / b;
}

int main(){
			
    float a, b;

    printf("Digite um número para a: ");
    scanf("%f", &a);

    printf("Digite um número para b: ");
    scanf("%f", &b);

    float resultado1 = somar(a, b);
    printf("O resultado da soma é: %.1f\n", resultado1);

    float resultado2 = subtrair(a, b);
    printf("O resultado da subtração é: %.1f\n", resultado2);

    float resultado3 = multiplicar(a, b);
    printf("O resultado da multiplicação é: %.1f\n", resultado3);

    float resultado4 = dividir(a, b);
    printf("O resultado da divisão é: %.1f\n", resultado4);

	return 0;
}	
