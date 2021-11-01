
#include <iostream>

using namespace std;

int main()
{
    cout<<"Лабораторная работа #13.1"<<endl;
    
    float c, m;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> c;
    cout << "Стоимость конфет" << endl;
    for  (m = 0.1; m < 1.1;  m += 0.1)
    cout << m << " кг = " <<  c*m << endl;
    
    cout<<"Лабораторная работа #13.2"<<endl;
    int N;
    double p = 1;
    cout << "N: ";
    cin >> N;
    for (int i = 1; i<=N; i++) {
        p = p*(1+0.1*i);
    }
    cout << "Результат: " << p << endl;
    
    cout<<"Лабораторная работа #13.3"<<endl;
    
    int n;
    cout << "N:";
    cin >> n;
 
    int result = 0, i;
    for (i = 1; i <= (2 * n - 1); i += 2) {
        result += i;
        cout << result << endl;
    }
    
    cout<<"Лабораторная работа #13.4"<<endl;
    
    float a;
    cout<<"A:";
    cin>>a;
 
    cout<<"N: ";
    cin>>n;
 
 
    float a2 = 1, rez = 1;
  
 
    for (i = 2; i <= n; ++i)
    {
        a2 *= a;
        rez += a2;
    }
    cout<<rez<<endl;
    
    cout<<"Лабораторная работа #13.5"<<endl;
    
    cout<<"A:";
    cin>>a;
    cout<<"N:";
    cin>>n;
    
 
    for (i = 2; i <= n; ++i)
    {
        a2 *= -a;
        rez += a2;
    }
    cout<< rez;
    
    
    return 0;
    
}
