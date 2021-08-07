#include<iostream>
using namespace std;

int main(){
int a , b , c;
cout <<"Please enter the first numbe -";
cin >> a;

cout <<"Please enter the second number -";
cin >> b;

cout <<"Please enter the third number - ";
cin >> c; 


if(a>b){
    if (a>c)
    {
        cout << "The Maximum No. is - ";
        cout << a;


    }
    
    else {


        
        cout << "The Maximum No. is";
        cout << c;

    }
    
}

else{

    if(b>c){

        cout << "The Maximum No. is";
        cout << b;
    }

    else{
        cout << "The Maximum No. is";
        cout << c;
    }

}






}