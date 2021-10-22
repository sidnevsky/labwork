#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    // 10.1
    cout << "Лабораторная работа #10.1" << endl;
    int a,b,c;
    cout<<"Введите число a: ";
    cin >> a;
    cout<<"Введите число b: ";
    cin >> b;
    if (a > 2 && b <- 3) {
        cout << "Истинно"<< endl;
    }
    else {
        cout << "Ложь" << endl;
    }
    // 10.2
    cout << "Лабораторная работа #10.2" << endl;
    cout<<"Введите число a: ";
    cin >> a;
    cout<<"Введите число b: ";
    cin >> b;
    cout<<"Введите число c: ";
    cin >> c;
    if (a < b < c) {
        cout << "Истинно" << endl;
    }
    else {
        cout << "Ложь" << endl;
    }
    // 10.3
    cout << "Лабораторная работа #10.3" << endl;
    cout<<"Введите число a: ";
    cin >> a;
    if (a%2==0 && a>9 && a<100) {
    cout << "Истинно"<<endl;
    }
    else 
    {
    cout << "Ложь"<<endl;
    }
    // 10.4
    cout << "Лабораторная работа #10.4" << endl;
    cout<<"Введите трехзначное число: ";
    cin >> a;
    cout << (((a/100)<(a%100/10)) & ((a%100/10)<(a%10))) << endl;
    // 10.5
    cout << "Лабораторная работа #10.5" << endl;
    cout << "Введите четырехзначное число: ";
    cin >> a;
    a = abs (a);
    cout << (a%10==a/1000 & a%100/10 == a%1000/100) << endl;
    // 10.6
    cout << "Лабораторная работа #10.6" << endl;
    cout<<"Введите число a: ";
    cin >> a;
    cout<<"Введите число b: ";
    cin >> b;
    cout<<"Введите число c: ";
    cin >> c;
    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        cout << "Истинно";
    }
    else {
        cout << "Ложь";
    }
    // 10.7
    cout << "Лабораторная работа #10.7" << endl;
    cout<<"Введите число a: ";
    cin >> a;
    cout<<"Введите число b: ";
    cin >> b;
    cout<<"Введите число c: ";
    cin >> c;
     if ( (a+b) > c && (a+c) > b && (b+c) > a) {
    cout << "Истинно";
    }
    else {
    cout << "Ложь"; 
    }
    return 0;
}
