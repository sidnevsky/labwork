#include <iostream>

using namespace std;

int main()
{
    cout<<"Лабораторная работа #11.1"<<endl;
    
    int a,b,c;
    cout<<"Введите переменную a: ";
    cin>>a;
    cout<<"Введите переменную b: ";
    cin>>b;
    
    if (a!=b) {
        if (a>b) {
            c = a+b;
            a = c-b;
            b = c-a;
        }
        else {
            c = a+b;
            b = c-a;
            a = c-a;
        }
        cout << "a: " << a << ' ' << "b: " << b << endl;
    }
    else {
        a = b = 0;
        cout << "a: " << a << ' ' << "b: " << b << endl;
    }
    
    cout<<"Лабораторная работа #11.2"<<endl;
    
    cout<<"Введите первое число: ";
    cin>>a;
    cout<<"Введите второе число: ";
    cin>>b;
    cout<<"Введите третье число: ";
    cin>>c;
    
    if (b<=c&&b<=a) {
        cout << a+c << endl;
    }
    else {
        if (a <= c && a <= b) {
            cout << b + c << endl;
            }
    else {
        cout << b + a << endl;
    }
    }
    
    cout<<"Лабораторная работа #11.3"<<endl;
    
    cout << "Введите первое число: " <<endl;
    cin >> a;
    cin >> a;
    cout << "Введите второе число: " <<endl;
    cin >> b;
    cin >> b;
    cout << "Введите третье число: " <<endl;
    cin >> c;
    cin >> c;
    
	if (a - b > a - c)
	{
		cout << "Ближе точка B, значение координаты которой равно " << b << ". " << "Расстояние от точки B до точки A равно " << abs(a - b) << "." << endl;
	}
	else if (a - b < a - c)
	{
		cout << "Ближе точка C, значение координаты которой равно " << c << ". " << "Расстояние от точки C до точки A равно " << abs(a - c) << "." << endl;
	}
	else
	{
		cout << "Точки B и С равны. Расстояние от этих точек до точки A равно " << abs(a - c) << "." << endl;
	}
    
    cout<<"Лабораторная работа #11.4"<<endl;
    
    int x,y;
    cout<<"Введите переменную x: ";
    cin>>x;
    cout<<"Введите переменную y: ";
    cin>>y;
    
    if (x < 0 && y > 0) {
        cout << "Первая четверть"<<endl;
    }
    else if (x < 0 && y < 0) {
        cout << "Вторая четверть"<<endl;
    }
    else if (x < 0 && y < 0) {
    cout << "Третья четверть"<<endl;
    }
    else
    cout << "Четвертая четверть"<<endl;
    
    cout<<"Лабораторная работа #11.5"<<endl;
    
    int num;
    cout<<"Введите число: ";
    cin>>num;
    if (num==0) 
        cout<<"Нулевое"<<endl;
        else {
            if (num>0)
            cout<<"Положительное"<<endl;
            else
            cout<<"Отрицательное"<<endl;
            if ((num%2)==0)
            cout << "Четное" <<endl;
            else
            cout<<"Нечетное"<<endl;
        }
        cout << "Число" << endl;
        
    cout<<"Лабораторная работа #11.6"<<endl;
    
    cout << "a в диапозоне: 1-999" << endl;
    
    cout << "a: "; 
    cin >> a;
    
    if (a % 2 == 0);
    else cout << "не";
    cout << "четное ";
    if (a / 100 > 0 && a / 100 < 10) cout << "трехзначное ";
    else if (a / 10 > 0 && a / 10 < 10) cout << "двухзначное ";
    else if (a / 10 == 0) cout << "однозначное ";
    cout << "число";
 
    cout << endl << endl;
        
    return 0;
    
}
