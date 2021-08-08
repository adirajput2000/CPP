#include<iostream>
using namespace std;

int factorial(int a,int b){

    for (int i = a; i <b; i++)
    {
        for (int j = 2; j<i; j++)
        {
            if(i%j==0){
                break;
            }
            
            else if (j==i-1)
            {
                cout<<i;
            }
            

        }
    }
    


}


int main(){

int a, b;
 cout<<"Please enter the first number - ";
 cin>>a;

 cout<<"Please enter the second number - ";
 cin >>b;

 factorial(a,b);





}