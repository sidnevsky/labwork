#include <stdio.h>
#include <math.h>
 
int main(void)
{
    float A, B, C;
    printf("Введите значение точки для A: ");
    scanf ("%f", &A);
 
    printf("Введите значение точки для B: ");
    scanf ("%f", &B);
 
    printf("Введите значение точки для C: ");
    scanf ("%f", &C);
 
    float AC = abs(A-C);
    printf("Длина отрезков AC: %f\n",AC);
 
    float BC = abs(B-C);
    printf("Длина отрезков BC: %f\n",BC);
 
    printf("Произведение: %f\n",BC*AC);
 
    return 0;
}