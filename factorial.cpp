#include<iostream>
using namespace std;

int main(){

    int a, fac = 1 ;
    cout<<"Please enter a number";
    cin>>a;

    for (int i = a; i >=1; i--)
    {
       fac = fac * i; 
    }

    cout<<fac;
    





}