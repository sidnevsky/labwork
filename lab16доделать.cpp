#include <iostream>
#include <math.h>
#include <vector>
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
    
    int nz,sum,az,bz;
    cout << "N:";
    cin >> nz;
    vector<int> v(nz);
    cout << "a: ";
    cin >> az;
    cout << "B: ";
    cin >> bz;
    v[0] = az;
    v[1] = bz;
    sum = v[0] + v[1];
    for (vector<int>::size_type i=2;i<nz;++i)
        {
            v[i] = sum;
            sum += v[i];
    
        }
    for (vector<int>::size_type i=0;i<v.size();++i)
    cout << v[i] << ' ';
    
    cout<<endl;
    // исправил
    cout << "Лабораторная работа 16.4"<<endl;
    
    int k[1000];
    int i1,n1;
    cout<<"n: ";
    cin>>n1;
 
    for (i1=0; i1<n1; ++i1){
        cout<<"A: ", i1+1;
        cin>>k[i1];
    }
 
    for (i1=0; i1<n1/2; ++i1){
            cout<<k[i1]<<endl;
            cout<<k[n1-i1-1]<<endl;
    }
    if (n1%2 != 0 ) cout<<k[(n1/2)] << endl;
    
    cout << "Лабораторная работа 16.5"<<endl;
    
    int ad[10];
    int nd, id;
 
    cout<<"N: ";
    cin>>nd;
 
    for (id=0; id<nd; ++id){
        cout<<"a: ",id+1;
        cin>>ad[id];
    }
 
    for (id=0; id<nd; id+=2)             
    cout<<ad[id];       
    for (id=nd-(nd%2)-1; id>=1; id-=2)
            cout<<ad[id];
 
    
    return 0;
}
