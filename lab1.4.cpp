#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a,b,a2,b2,s,r,p,c;
	cout << "Введите первое число для a: ";
	cin >> a;
	cout << "Введите второе число для b: ";
	cin >> b;
	a2 = a*a;
	b2 = b*b;
	s = a2+b2;
	r = abs(a2-b2);
	p = a2*b2;
	c = a2/b2;
	cout << "Сумма: " << s << endl;
	cout << "Разность: " << r << endl;
	cout << "Произведение: " << p << endl;
	cout << "Частное: " << c;

    return 0;
}
