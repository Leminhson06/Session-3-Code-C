#include <stdio.h>
#define PI 3.14159

int main(){
    float radius, circumference, area;

    printf("Mời bạn nhập bán kính của hình tròn: ");
    scanf("%f", &radius);

    cirumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Chu vi hình tròn: %.2f\n", cirumference);
    printf("Diện tích hình tròn: %2f\n", area);

    return 0;
}