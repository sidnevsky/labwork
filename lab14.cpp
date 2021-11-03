#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    cout << "Лаборторная работа #14.1" << endl;
    
    int a,b;
    cout << "Введите первое число: ";
    cin >>  a;
    cout << "Введите второе число: ";
    cin >> b;
    for( int i = b - 1; i>a; --i)
    cout << i << endl;
    cout << "Количество: " << b-a-1 << endl; 
    
    cout << "Лаборторная работа #14.2" << endl;
    
    double A,B;
    cout << "Введите первое число: ";
    cin >>  A;
    cout << "Введите второе число: ";
    cin >> B;
    
    cout << "Длинa незанятой части отрезка A: " << a%b << endl;

    cout << "Лаборторная работа #14.3" << endl;
    
    int n,k,s;
    
    cout << "Введите целое число N (> 1): ";
    cin >> n;
    // подумать еще разок
    while(s <- n) {
        ++k;
        s +=k;
    }
    cout << "K: " << k << endl;
    
    cout << "Лаборторная работа #14.4" << endl;
    
    double p,sum = 1000;
    int K = 1;
    cout << "P: ";
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
