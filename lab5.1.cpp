#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1,x2,y1,y2, dist;
    
    cout <<"Введите координату x1: ";            
    cin>>x1;                     
    cout <<"Введите координату y1: ";             
    cin>>y1;             
    cout <<"Введите координату x2: ";             
    cin>>x2;             
    cout <<"Введите координату y2: ";             
    cin>>y2;
    
    dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    
    cout<<"Расстояние между двумя точками: "<<dist;

    return 0;
}