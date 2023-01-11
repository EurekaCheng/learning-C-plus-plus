#include<iostream>
#include<string>
using namespace std;

int main(){
    int myNum = 22;
    int x,y,sum;  //Define multiple variables at the same time
    const int onehour = 1;   //define constant
    /*默写常量：
    const const const const const const const
    */
    string h="hello world";
    cout << "My years old is " << myNum <<endl;
    cout <<"Please input a number:\n";
    cin >> x;
    cout <<"Please input another number:\n";
    cin >> y;
    sum = x + y;
    cout << "The sum of two numbers is "<< sum;
    cout << "My first string example is " << h <<endl;

    return 0;
}