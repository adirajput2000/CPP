#include<iostream>
using namespace std;


int main(){

int a ;
cout <<"Please enter a number - ";
cin >> a;

for (int i = 1; i <= a; i++)
{
   
   for (int j = a-i; j>0; j--)
   {
       cout<<" ";

   }
   
   for (int k = 1; k <= i; k++)
   {
       cout <<"*";

   }
   
   cout<<endl;

    
}







}