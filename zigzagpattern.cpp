#include<iostream>
using namespace std;

int main(){


int a;
cout<<"Please enter a number - ";
cin>> a;

for (int i = 1; i <=3; i++)
{
    for (int j = 1; j<=a; j++)
    {
        int k = i+j;
        if(k%4==0 ){
            cout<<"*"<<" ";

        }
        else if (i==2 && j%4==0)
        {
            
            cout<<"*"<<" ";
        }
        
        else{
            cout<<" "<<" ";
        }
    }
    cout<<endl;
    
}




}