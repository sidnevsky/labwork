#include <stdio.h>
#include <math.h>
 
int main(void)
{
    float a, b;
    printf("Введите первое число для a: ");
    scanf ("%f", &a);
 
    printf("Введите второе число для b: ");
    scanf ("%f", &b);
 
    printf("Сумма: %f\n",abs(a)+abs(b));
    printf("Разность: %f\n",abs(a)-abs(b));
    printf("Произведение: %f\n",abs(a)*abs(b));
    printf("Частное: %f\n",abs(a)/abs(b));
 
    return 0;
}
