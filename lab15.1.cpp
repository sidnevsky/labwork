#include <iostream>
#include <cmath>
using namespace std;

void PowerA3(double a, double &b)
{
    b = a * a * a;
}

int main(void)
{   
    cout << "Лаборторная работа #15.1" << endl;
    
    double x[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        PowerA3(x[i], x[i]);
        cout << x[i] << ' ';
    }
    
    return 0;
}
