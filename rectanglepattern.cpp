#include<iostream>
using namespace std;


int main(){
int a ,b ;
cout <<"Please enter the number of rows";
cin >> a;

cout <<"Please enter the number of column";
cin >>b;

for (int i = 0; i < a; i++)

{
    for (int j = 0; j < b; j++)
    {
        cout <<"*";
    }
    cout << endl;
}




}