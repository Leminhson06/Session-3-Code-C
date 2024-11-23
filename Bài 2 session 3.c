#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Nhap nhiet do theo Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Nhiệt độ %.2f độ Celsius tương đương %2.f độ Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}