#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1,x2,y1,y2,a,b,p,s;
    
    cout <<"Введите координату x1: ";            
    cin>>x1;                     
    cout <<"Введите координату y1: ";             
    cin>>y1;             
    cout <<"Введите координату x2: ";             
    cin>>x2;             
    cout <<"Введите координату y2: ";             
    cin>>y2;
    
    a = abs(x1-x2);
    b = abs(y1-y2);
    
    
    p = 2*(a+b);
    cout << "Периметр: "<<p<<endl;
    s = a*b;
    cout << "Площадь: "<<s<<endl;

    return 0;
}