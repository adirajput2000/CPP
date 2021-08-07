#include<iostream>
using namespace std;

int main(){

int a,b, d;
char c;

cout<<"Please enter first number - ";
cin >> a;
cout<<"Please enter second number - ";
cin >> b;

cout <<"Please enter the arthimetic sign";
cin >> c;

switch (c)
{
case '+': d = a+b;
    cout <<d;

    break;
case '-': d = a-b;
    cout <<d;

    break;
    case '*': d = a*b;
    cout <<d;

    break;
    case '/': d = a/b;
    cout <<d;

    break;


default:
    cout <<"Please enter an appropirate sign";
    break;
}







}