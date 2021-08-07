#include<iostream>
using namespace std;

int main(){

int a ;
cout<<"Please enter a number";
cin>>a;

for (int i = a; i >=1 ; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<" ";

    }
    for (int k = 1; k <=a; k++)
    {
        cout<<"*"<<" ";
    }
    
    cout<<endl;

    
}





}