#include <iostream>
#include <math.h>
using namespace std;
int main(){
    
	// З-1
	
	cout <<"Лабораторная работа 6.1"<<endl;
	
	double a,b,c,x,y;
	
   	cout << "Введите значение для переменной A: ";
	cin >> a;
	cout << "Введите значение для переменной B: ";
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "#1: " << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	
    	cout << "Введите значение для переменной A: ";
	cin >> a;
	cout << "Введите значение для переменной B: ";
	cin >> b;
	a = a+b;
	b = a-b;
	a = a-b;
	cout << "#2: " << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	
	// З-2
	cout <<"Лабораторная работа 6.2"<<endl;
	
	cout << "Введите значение для переменной A: ";
	cin >> a;
	cout << "Введите значение для переменной B: ";
	cin >> b;
	cout << "Введите значение для переменной C: ";
	cin >> c;
	x = b;
	b = a;
	y = c;
	c = x;
	a = y;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;

	// З-3
	cout <<"Лабораторная работа 6.3"<<endl;
	cout << "Введите значение для переменной A: ";
	cin >> a;
	cout << "Введите значение для переменной B: ";
	cin >> b;
	cout << "Введите значение для переменной C: ";
	cin >> c;
	x = c;
	c = a;
	y = b;
	b = x;
	a = y;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	
	// З-4
	cout <<"Лабораторная работа 6.4"<<endl;

	cout << "Введите значение аргумента X: ";
    	cin >> x;
	y = (3 * pow(x,6)) - (6 * pow(x,2)) - 7;
	cout << "Y = " << y << endl;
	
	// З-5
	cout <<"Лабораторная работа 6.5"<<endl;
	
	cout << "Введите значение аргумента X: ";
    	cin >> x;
	y = 4*(pow((x-3),6))-7*(pow((x-3),3))+2;
	cout << "Y = "<<y << endl;
	
	// 3-6
	cout <<"Лабораторная работа 6.6"<<endl;
	
	cout << "Введите значение для переменной A: ";
	cin >> a;
	x = a*a;
	cout << "A в степень 2 = " << x << endl;
	x = x*x;
	cout << "A в степень 4 = " << x << endl;
	x = x*x;
	cout << "A в степень 8 = " << x << endl;
	
	// 3-7
	cout <<"Лабораторная работа 6.7"<< endl;
	
    	cout << "Введите значение для переменной A: ";
	cin >> a;
	x = a*a;
	cout << "A в степень 2 = " << x << endl;
	y = x*a;
	cout << "A в степень 3 = " << y << endl;
	x = x*y;
	cout << "A в степень 5 = " << x << endl;
	y = x;
	x = y*y;
	cout << "A в степень 10 = " << x << endl;
	x = x*y;
	cout << "A в степень 15 = " << x << endl;
	
	
	return 0;
}
