#include <stdio.h>
void main(){

    float celsius, fahrenheit, kelvin, resultado_fahrenheit, resultado_celsius, resultado_kelvin;
    int conversor;
    do{

    printf("Conversor de Temperaturas\n");
    printf("Escolha qual conversor usar:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("5 - Fahrenheit para Kelvin\n");
    printf("6 - Kelvin para Fahrenheit\n");
    printf("7 - Sair\n");
    scanf("%d", &conversor);

    if(conversor == 1){
        printf("Insira a temperatutra em Celsius: ");
        scanf("%f", &celsius);

        resultado_fahrenheit = (celsius * 1.8) + 32;
        printf("A temperatura e de: %f\n\n", resultado_fahrenheit);
    }
    else if(conversor == 2){
        printf("Insira a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);
        resultado_celsius = (fahrenheit - 32) / 1.8;
        printf("A temperatura e de: %f\n\n", resultado_celsius);
    }
    else if(conversor == 3){
        printf("Insira a temperatura em Celsius: ");
        scanf("%f", &celsius);
        resultado_kelvin = celsius + 273;
        printf("A temperatura e de: %f\n\n", resultado_kelvin);
    }
    else if(conversor == 4){
        printf("Insira a temperatura em Kelvin: ");
        scanf("%f", &kelvin);
        resultado_celsius = kelvin - 273;
        printf("A temperatura e de: %f\n\n", resultado_celsius);
    }
    else if(conversor == 5){
        printf("Insira a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);
        resultado_kelvin = (((fahrenheit - 32) / 9) * 5) + 273;
        printf("A temperatura e de: %f\n\n", resultado_kelvin);
    }
    else if(conversor == 6){
        printf("Insira a temperatura em Kelvin: ");
        scanf("%f", &kelvin);
        resultado_fahrenheit = (((kelvin - 273) / 5) * 9) + 32;
        printf("A temperatura e de: %f\n\n", resultado_fahrenheit);
    }
    else{
        printf("Opcao Invalida\n");
    }
    }
    while(conversor < 7);

}
