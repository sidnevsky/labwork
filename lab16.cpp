#include <iostream>
#include <math.h> 
using namespace std;

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
    
    int z[10];
    int i;
 
    cout<<"N: ";
    cin>>n;
 
    cout<<"a: ";
    cin>>z[0];
 
    cout<<"B: ";
    cin>>z[1];
 
    for (i=2; i<n; ++i){
        z[i]=0;
        int i2;
        for (i2=0; i2<i; ++i2) z[i] += z[i2];
    }
    for (i=0; i<n; ++i) cout<<i,z[i];
    
    cout<<endl;
    
    cout << "Лабораторная работа 16.4"<<endl;
    
    int k[10];
    int i1,n1;
    cout<<"n: ";
    cin>>n1;
 
    for (i1=0; i1<n1; ++i1){
        cout<<"A: ", i1+1;
        cin>>k[i1];
    }
 
    for (i1=0; i1<n/2; ++i1){
            cout<<k[i1];
            cout<<k[n1-i-1];
    }
    if (n1%2 != 0 ) cout<<k[(n1/2)];
    
    
    
    return 0;
}
