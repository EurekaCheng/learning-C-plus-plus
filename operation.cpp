//easy caiculator
#include<iostream>
#include<string>
using namespace std;

int main(){
    int x,m,n;
    cout <<"������Ҫ���������(1234�ֱ��Ӧ�Ӽ��˳�):" ;
    cin >> x;
    cout <<"�������һ������:" ;
    cin >> m;
    cout <<"������ڶ�������:" ;
    cin >> n;
    switch (x)
    {
    case 1:
        cout << "�������Ϊ" << m + n;
        break;
    case 2:
        cout << "�������Ϊ" << m - n;
        break;

    case 3:
        cout << "�������Ϊ" << m * n;
        break;
    case 4:
        cout << "�������Ϊ" << m / n;
        break;
    
    default:
        break;
    }

   
}