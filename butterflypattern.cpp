#include<iostream>
using namespace std;

int main(){

int a ;

cout<<"Please enter a number";
cin >> a;

for (int i = 1; i <= a; i++)
{

    for (int j = 1; j <=2*a; j++)
    {

        if(j<=i || j>2*a-i){
            cout<<"*"<<" ";
        }
        else{
            cout<<" "<<" ";

        }


    }
    
    cout<<endl;

}

for (int k = a; k >=1; k--)
{
    for (int j = 2*a; j >= 1 ; j--)
    {

         if(j<=k || j>2*a-k){
            cout<<"*"<<" ";
        }
        else{
            cout<<" "<<" ";

        }

    }
    cout<<endl;
    
}






}