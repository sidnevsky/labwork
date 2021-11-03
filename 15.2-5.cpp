
#include <stdio.h>
 
int sign(float x){
   if (x<0){ return -1;}    
   if (x==0){ return 0;}    
   if (x>0){ return 1;}
}
float rings(float r1, float r2){
   return 3.14*(r1*r1-r2*r2);
}

int quarter(float x, float y){
    if ((x>0)&&(y>0)){return 1;}
    if ((x<0)&&(y>0)){return 2;}
    if ((x<0)&&(y<0)){return 3;}     
    if ((x>0)&&(y<0)){return 4;}
}

float fact2(int n){
    int temp=1;
    for (;n>0;n-=2) temp*=n;
    return temp;
}
 
int main(void)
{   
    printf("Лабораторнгая работа №15.2\n");
    float a,b;
    printf("A:");
    scanf("%f", &a);
    printf("B:");
    scanf("%f", &b);
 
    printf("Sign(A)+Sign(B):%i\n",sign(a)+sign(b));
    printf("Лабораторнгая работа №15.3\n");
    
    int i;
    for(i=1; i<=3; ++i){
        float r1,r2;
        printf("R1:");
        scanf("%f", &r1);
        printf("R2:");
        scanf("%f", &r2);
        printf("S:%f\n",rings(r1,r2));
    }
    
    printf("Лабораторнгая работа №15.4\n");
    
    for (i=1; i<=3; ++i){
        float x,y;
        printf("X:");
        scanf("%f", &x);
        printf("Y:");
        scanf("%f", &y);
        printf("Quarter:%i\n",quarter(x,y));
     }
    
    int n;
    for (i=1; i<=5; ++i){
        printf("N:");
        scanf("%i", &n);
        printf("fact: %f\n",fact2(n));
    }
    
    return 0;
}
