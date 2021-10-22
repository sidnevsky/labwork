#include <iostream>
using namespace std;
 
int main() {
    
    // 8-1
    cout<< "Лабораторная работа #8.1"<< endl;
    
    double byte, kilobyte;
    cout << "Количество Байт: ";
    cin >> byte;
 
    kilobyte = byte/1024;
    cout << "Килобайт: " << kilobyte << endl;
    
    // 8-2
    cout<< "Лабораторная работа #8.2"<< endl;
    
    double a,b;
    
    cout << "Введите длину отрезка a: ";
    cin >> a;
    cout << "Введите длину отрезка b: ";
    cin >> b;
    cout << "Количество отрезков b, размещенных на отрезке a: " << a/b << endl;
    
    // 8-3
    cout<< "Лабораторная работа #8.3"<< endl;
    
    cout << "Введите длину отрезка a: ";
    cin >> a;
    cout << "Введите длину отрезка b: ";
    cin >> b;
    cout << "Длина незанятой части отрезка a: " << a-b << endl;
    
    // 8-4
    cout<< "Лабораторная работа #8.4"<< endl;
    
    int ab;
    cout << "Введите двузначное число: ";
    cin >> ab;
    cout << "Число при переустановке цифр: " << ab/10+ab%10*10 << endl;
    
    // 8-5
    cout<< "Лабораторная работа #8.5"<< endl;
    
    int abc;
    cout << "Введите трехзначное число: ";
    cin >> abc;
    cout << "Число при переустановке цифр: " << (abc % 100 / 10 * 100) + (abc % 10) * 10 + abc / 100;
    
    return 0;
}
