#include <iostream>

using namespace std;

// 18.5 

int swap(float *f1, float *f2){
    *f1+=*f2;
    *f2=*f1-*f2;
    *f1=*f1-*f2;
    return 0;
}


int main()
{
    cout<<"Лабораторная работа №18.1"<<endl;
    int a[10],b[10];
    int n;
 
    cout<<"Размер N: ";
    cin>>n;
    
    int i;
    for (i=0; i<n; ++i){
        cout<<"A"<<i+1<<": ";
        cin>>a[i];
    }
    for (i=0; i<n; ++i){
        cout<<"B"<<i+1<<": ";
        cin>>b[i];
    }
 
    for (i=0; i<n;++i){
        a[i]+=b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    cout<<"A на B, B на A"<<endl;
    
    for (i=0; i<n; ++i) cout<<"A"<<i+1<<": "<<a[i]<<endl;
    for (i=0; i<n; ++i) cout<<"B"<<i+1<<": "<<b[i]<<endl;
    
    cout<<"Лабораторная работа №18.2"<<endl;
    
    float a1[10],b1[10];
    
    cout<<"Размер N: ";
    cin>>n;
 
    int k;
    for (k=0; k<n; ++k){
        cout<<"A"<<k+1<<": ";
        cin>>a1[k];
    }
 
    for (k=0; k<n; ++k){
        b1[k]=0;
        for (i=k; i<n; ++i){
            b1[k]+=a1[i];
        }
    }
    
    for (k=0; k<n; ++k) cout<<"B"<<k+1<<": "<<b1[k]<<endl;
    
    cout<<"Лабораторная работа №18.3"<<endl;
 
    cout<<"Размер N: ";
    cin>>n;
 
    int i2;
    for (i2=0; i2<n; ++i2){
        cout<<"A"<<i2+1<<": ";
        cin>>a[i2];
    }
 
 
    int odd=0;
 
    for (i2=n-1; i2>=0; --i2){
        if (a[i2]%2!=0) {
            odd=a[i2];
            break;
        }
    }
 
    for (; i2>=0; --i2){
        if (a[i2]%2!=0){
            a[i2]+=odd;
        }
    }
    
    for (i2=0; i2<n; ++i2) cout<<"A"<<i2+1<<": "<<a[i2]<<endl;
    
    cout<<"Лабораторная работа №18.4"<<endl;
 
    cout<<"Размер N: ";
    cin>>n;
 
    int i3;
    for (i3=0; i3<n; ++i3){
        cout<<"A"<<i3+1<<": ";
        cin>>a[i3];
    }
 
    int min=0,max=0;
 
    for (i3=n-1; i3>=0; --i3){
        if (a[i3]>a[max]) max=i3;
        if (a[i3]<a[min]) min=i3;
    }
 
    if (max<min) {
        max+=min;
        min=max-min;
        max=max-min;
    }
 
    for (i3=min+1; i3<min+(max-min); ++i3) a[i3]=0;
    for (i3=0; i3<n; ++i3) cout<<"A"<<i3+1<<": "<<a[i3]<<endl;
    
    cout<<"Лабораторная работа №18.5"<<endl;
    
    float A[10];
 
    cout<<"Размер N: ";
    cin>>n;
 
    int i4;
    for (i4=0; i4<n; ++i4){
        cout<<"A"<<i4+1<<": ";
        cin>>A[i4];
    }
 
    for (i4=1; i4<n; ++i4){
        if (A[i4-1]>A[i4]) {
            swap(&A[i4-1], &A[i4]);
        }
        else break;
    }
    
    for (i4=0; i4<n; ++i4) cout<<"A"<<i4+1<<": "<<A[i4]<<endl;
    
    return 0;
}
