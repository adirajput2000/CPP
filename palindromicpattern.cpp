#include<iostream>
using namespace std;

int main(){

int a;
cout<<"Please enter a number - ";
cin>>a;

for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <=a-i; j++)
    {

        cout<<" "<<" ";


    }

    for (int k = i; k >=1; k--)
    {
        cout<<k<<" ";

    }

    for (int l = 1; l <= i; l++)
    {
        if(l==1){

        }
        else{
            cout<<l<<" ";
        }
    }
    

   
    
    cout<<endl;
    
}






}