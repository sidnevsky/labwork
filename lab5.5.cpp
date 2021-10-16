#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,p,p2,s;
    
    cout <<"Введите координату x1: ";            
    cin>>x1;                     
    cout <<"Введите координату y1: ";             
    cin>>y1;             
    cout <<"Введите координату x2: ";             
    cin>>x2;             
    cout <<"Введите координату y2: ";             
    cin>>y2;
    cout <<"Введите координату x3: ";             
    cin>>x3;             
    cout <<"Введите координату y3: ";             
    cin>>y3;
    
    a=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    b=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    c=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
    
    
    p = a+b+c;
    cout << "Периметр: " << p << endl;
    p2 = p/2;
    s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
    cout << "Площадь: " << s;
    
    

    return 0;
}
