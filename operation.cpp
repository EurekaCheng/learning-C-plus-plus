//easy caiculator
#include<iostream>
#include<string>
using namespace std;

int main(){
    int x,m,n;
    cout <<"请输入要运算的类型(1234分别对应加减乘除):" ;
    cin >> x;
    cout <<"请输入第一个整数:" ;
    cin >> m;
    cout <<"请输入第二个整数:" ;
    cin >> n;
    switch (x)
    {
    case 1:
        cout << "两数相加为" << m + n;
        break;
    case 2:
        cout << "两数相减为" << m - n;
        break;

    case 3:
        cout << "两数相乘为" << m * n;
        break;
    case 4:
        cout << "两数相除为" << m / n;
        break;
    
    default:
        break;
    }

   
}