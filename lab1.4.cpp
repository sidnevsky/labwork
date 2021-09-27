#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout << "Назовите два ненулевых числа для a и b(через пробел): ";
    cin >> a >> b;
    cout << "Сумма: " << a + b << endl;
	cout << "Разность: " << a - b << endl;
	cout << "Произведение: " << a * b << endl;
	cout << "Частное их квадратов:" << (a * a)  / (b * b) << endl;
    
    

    return 0;
}