#include<iostream>
using namespace std;


int main(){

    int a , i ;

    cout << "Please enter a number - ";
    cin >> a;

    for (i = 2; i < a; i++)
    {


        if (a%i == 0)
        {
            cout << "The given number is not prime number";
            break;

        }


        
    }

    if(i == a){
        
    cout<<"The given number is Prime Number";
    }

    


}