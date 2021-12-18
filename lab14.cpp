#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    cout << "Лаборторная работа #14.1" << endl;
    int a, b;
    cout<<"Введите целое число №1: ";
    cin>>a;
    cout << "Bведите целое число №2: ";
    cin >> b;
 
    int i, j;
    for (i = a; i <= b; ++i) {
        for (j = 1; j <= i; ++j)
            cout << i;
    }
    
    cout << endl;
    cout << "Лаборторная работа #14.2" << endl;
    
    int a1,b1;
    cout << "Введите положительное первое число: ";
    cin >>  a1;
    cout << "Введите положительное второе число: ";
    cin >> b1;
    int temp = a1;
    while (temp >= 0) {
    temp -= b1;
    }
    cout << "Длинa незанятой части отрезка: " << temp + b1 << endl;

    cout << "Лаборторная работа #14.3" << endl;
    
    int n;
    int k = 0;
    int s = 0;
    
    cout << "Введите целое число N (> 1): ";
    cin >> n;
    while(s <= n) {
        ++k;
        s +=k;
    }
    cout <<  "n: " << n << endl;
    cout <<  "k: " << k << endl;
    
    cout << "Лаборторная работа #14.4" << endl;
    
    double p,sum = 1000;
    int K = 0;
    cout << "Введите процент вклада: ";
    cin >> p;
    while (sum <= 1100) {
        ++K;
        sum += sum*p/100;
    }
    cout << "количество месяцев: " << K <<" ; "<< "итоговый размер вклада: " << sum << endl;
    
    cout << "Лаборторная работа #14.5" << endl;
    
    cout << "Введите первое число: ";
    cin >>  a;
    cout << "Введите второе число: ";
    cin >> b;
    while (( a!=0) & (b!=0)) {
        if (a>b) a = a % b;
        else b = b%a;
    }
    cout << "Общий делитель (НОД): " << a+b << endl;
    
    cout << "Лаборторная работа #14.6" << endl;
    
    cout << "Введите целое число N (> 1): ";
    cin >> n;
    int f=0,f1=1,f2=2,kk=2;
    while (f<n) {
        ++kk;
        f=f2+f1;
        f1=f;
        
    }
    cout << "Целое число: " << kk;
    
    return 0;
}
