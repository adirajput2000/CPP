#include<iostream>
using namespace std;

int main(){
int a,b,i,j ;
cout <<"Please enter first number";
cin >> a;

cout <<"Please enter second number";
cin >> b;

for ( i= a+1; i < b; i++)
{
    for ( j = 2; j < i; j++)

    {
        if (i%j == 0)
        {
            break;
            
        }

        
    }
    if(j==i){
        cout << i;
    }
    
}



}