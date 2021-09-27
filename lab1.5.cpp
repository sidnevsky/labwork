#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout << "Напишите два ненулевых числа для a,b" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Сумма: " << a + b << endl;
	cout << "Разность: " << a - b << endl;
	cout << "Произведение: " << a * b << endl;
	cout << "Частное их модулей: " << a / b << endl;
    
    

    return 0;
}