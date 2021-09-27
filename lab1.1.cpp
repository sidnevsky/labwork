#include <iostream>

using namespace std;

int main()
{
    int a,b,p,s;
    cout << "Укажите ширину a = ";
    cin >> a;
    cout << "Укажите высоту b = ";
    cin >> b;
    
    cout << "Площадь S = ";
    s = a*b;
    cout << s << endl;
    cout << "Периметр P = ";
    p = 2*(a+b);
    cout << p;
    
    return 0;
}
