
#include <iostream>

using namespace std;

int main()
{
    cout<<"Лабораторная работа #12.1"<<endl;
    
    
    int a;
    cout << "Число:";
    cin >> a;
 
    switch (a) {
        case 1:
        case 2:
        case 12:
        cout << "Зима" << endl ;
        break;
        case 3:
        case 4:
        case 5:
        cout << "Весна" << endl;
        break;
        case 6:
        case 7:
        case 8:
        cout << "Лето" << endl;
        break;
        case 9:
        case 10:
        case 11:
        cout << "Осень" << endl;
        break;
      }
    
    
    
    cout<<"Лабораторная работа #12.2"<<endl;
    
    int n;
        char c;
     
        cout << "Введите текущее напрление перемещения робота: ";
        cin >> c;
        cout << "Введите команду: ";
        cin >> n;
     
        switch (c) {
            case 'С':
                switch (n) {
                    case 1:
                        c='З';
                        break;
                    case 0:
                        c='С';
                        break;
                    case -1:
                        c='В';
                        break;
                    }
                break;
            case 'В':
                switch (n) {
                    case 1:
                        c='С';
                        break;
                    case 0:
                        c='В';
                        break;
                    case -1:
                        c='Ю';
                        break;
                    }
            case 'Ю':
                switch (n) {
                    case 1:
                        c='В';
                        break;
                    case 0:
                        c='Ю';
                        break;
                    case -1:
                        c='З';
                        break;
                }
                break;
            case 'З':
                switch (n) {
                    case 1:
                        c='Ю';
                        break;
                    case 0:
                        c='З';
                        break;
                    case -1:
                        c='С';
                        break;
                }
        }
        cout << c;
        
    cout<<"Лабораторная работа #12.3"<<endl;
    
    cout<<"Количество: ";
    cin>>n;
 
    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout<<"десять учебных заданий." << endl;
            break;
        case 11:
            cout << "одинадцать учебных заданий." << endl;
            break;
        case 12:
            cout << "двенадцать учебных заданий." << endl;
            break;
        case 13:
            cout << "тринадцать учебных заданий." << endl;
            break;
        case 14:
            cout << "четырнадцать учебных заданий." << endl;
            break;
        case 15:
            cout << "пятнадцать учебных заданий." << endl;
            break;
        case 16:
            cout << "шестнадцать учебных заданий." << endl;
            break;
        case 17:
            cout << "семнадцать учебных заданий." << endl;
            break;
        case 18:
            cout << "восемнадцать учебных заданий." << endl;
            break;
        case 19:
            cout << "девятнадцать учебных заданий." << endl;
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            cout << "двадцать " << endl;
            break;
        case 3:
            cout << "тридцать " << endl;
            break;
        case 4:
            cout << "сорок " << endl;
            break;
        }
 
        switch (n % 10) {
        case 1:
            cout << "одно " << endl;
            break;
        case 2:
            cout << "два " << endl;
            break;
        case 3:
            cout << "три " << endl;
            break;
        case 4:
            cout << "четыре " << endl;
            break;
        case 5:
            cout << "пять " << endl;
            break;
        case 6:
            cout << "шесть " << endl;
            break;
        case 7:
            cout << "семь " << endl;
            break;
        case 8:
            cout << "восемь " << endl;
            break;
        case 9:
            cout << "девять " << endl;
            break;
        }
 
        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "учебных заданий." << endl;
            break;
        case 1:
            cout << "учебное задание." << endl;
            break;
        case 2:
        case 3:
        case 4:
            cout << "учебных задания." << endl;
            break;
        }
    }
    
    cout<<"Лабораторная работа #12.4"<<endl;
    
    cout << "Число: ";
    cin>>n;
 
    switch (n / 100) {
    case 1:
        cout << "сто " << endl;
        break;
    case 2:
        cout << "двести " << endl;
        break;
    case 3:
        cout << "триста " << endl;
        break;
    case 4:
        cout << "четыреста " << endl;
        break;
    case 5:
        cout << "пятьсот " << endl;
        break;
    case 6:
        cout << "шестьсот " << endl;
        break;
    case 7:
        cout << "семьсот" << endl;
        break;
    case 8:
        cout << "восемьсот  " << endl;
        break;
    case 9:
        cout << "девятьсот  " << endl;
        break;
    }
 
    if ((n % 100) / 10 == 1)
        switch (n % 100) {
        case 10:
            cout << "десять" << endl;
            break;
        case 11:
            cout << "одинадцать" << endl;
            break;
        case 12:
            cout << "двенадцать" << endl;
            break;
        case 13:
            cout << "тринадцать" << endl;
            break;
        case 14:
            cout << "четырнадцать" << endl;
            break;
        case 15:
            cout << "пятнадцать" << endl;
            break;
        case 16:
            cout << "шестнадцать" << endl;
            break;
        case 17:
            cout << "семнадцать" << endl;
            break;
        case 18:
            cout << "восемнадцать" << endl;
            break;
        case 19:
            cout << "девятнадцать" << endl;
            break;
        }
    else {
        switch ((n % 100) / 10) {
        case 2:
            cout << "двадцать " << endl;
            break;
        case 3:
            cout << "тридцать " << endl;
            break;
        case 4:
            cout << "сорок " << endl;
            break;
        case 5:
            cout << "пятьдесят " << endl;
            break;
        case 6:
            cout << "шестьдесят " << endl;
            break;
        case 7:
            cout << "семьдесят " << endl;
            break;
        case 8:
            cout << "восемьдесят " << endl;
            break;
        case 9:
            cout << "девяносто " << endl;
            break;
        }
 
        switch (n % 10) {
        case 1:
            cout << "один" << endl;
            break;
        case 2:
            cout << "два" << endl;
            break;
        case 3:
            cout << "три" << endl;
            break;
        case 4:
            cout << "четыре" << endl;
            break;
        case 5:
            cout << "пять"<< endl;
            break;
        case 6:
            cout << "шесть" << endl;
            break;
        case 7:
            cout << "семь" << endl;
            break;
        case 8:
            cout << "восемь" << endl;
            break;
        case 9:
            cout<<"девять" << endl;
            break;
        }
    }
    
    cout<<"Лабораторная работа #12.5"<<endl;
    
    cout << "Год: ";
    cin>>n;
 
    cout << "год ";
 
    switch ((n) % 10) {
    case 0:
    case 1:
        cout << "бел";
        break;
    case 2:
    case 3:
        cout << "черн" << endl;
        break;
    case 4:
    case 5:
        cout << "зелён" << endl;
        break;
    case 6:
    case 7:
        cout << "красн" << endl;
        break;
    case 8:
    case 9:
        cout << "жёлт" << endl;
        break;
    }
 
    switch ((n + 1) % 5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        cout << "ой " << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "ого " << endl;
        break;
    }
 
    switch ((n + 8) % 12) {
    case 0:
        cout << "крысы" << endl;
        break;
    case 1:
        cout << "коровы" << endl;
        break;
    case 2:
        cout << "тигра" << endl;
        break;
    case 3:
        cout << "зайца" << endl;
        break;
    case 4:
        cout << "дракона" << endl;
        break;
    case 5:
        cout << "змеи" << endl;
        break;
    case 6:
        cout << "лошади" << endl;
        break;
    case 7:
        cout << "овцы" << endl;
        break;
    case 8:
        cout << "обезьяны" << endl;
        break;
    case 9:
        cout << "курицы" << endl;
        break;
    case 10:
        cout << "собаки" << endl;
        break;
    case 11:
        cout<<"свиньи" << endl;
        break;
    }
    
    return 0;
    
}
