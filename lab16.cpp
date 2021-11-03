#include <iostream>
#include <math.h> 
using namespace std;
 // доделать
int main()
{   
    
    cout << "Лабораторная работа 16.1"<<endl;
    int a[100], n;
 
    cout << "Целое число N: ";
    cin >> n;
 
    for (int i=0; i<n; i++)
        a[i] = 1 + i*2;
 
    for (int i=0; i<n; ++i)
        cout << "a[" << i << "]=" << a[i] << endl;
        
    cout << "Лабораторная работа 16.2"<<endl;
    
    int d,a1;
    
    cout << "Целое число N: ";
    cin >> n;
    cout << "Первый член A: ";
    cin >> a1;
    cout << "Знаменатель D: ";
    cin >> d;
    
    int arr[]{n};
    
    for (int i = 0; i <= n; i++)
    {
    arr[i] = a1*pow(d,i);
    cout << arr[i] << endl;
    }
    
    cout << "Лабораторная работа 16.3"<<endl;
    
    return 0;
}
