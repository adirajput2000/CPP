#include<cmath>
#include<iostream>
using namespace std;

int deci(int a ){


int x =1;
int ans = 0;

while (a>0)
{
    int y = a%10;
    ans = ans+ y*x;
    x = x*2;
    a = a/10;
}
return ans;




}




int main(){

int a ;
cout<<"Please enter a binary number";
cin>>a;

cout<<deci(a);



}