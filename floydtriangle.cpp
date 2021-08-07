#include<iostream>
using namespace std;

int main(){

int a;
int k =0;
cout<<"Please enter a number";
cin >> a;

for (int i = 1; i <= a; i++)

{

    for (int j= 1; j <= i; j++)

    {
        k = k+1;
        cout<< k <<" " ;

    }
    

    cout<<endl;


}




}