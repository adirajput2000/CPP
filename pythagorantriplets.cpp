#include<iostream>
using namespace std;
#include<cmath>


bool check(int x, int y, int z){


    int a = max(x, max(y,z));
    int b,c;

    if (a==x)
    {
        b=y; c=z;
    }
    else if(a==y){
        b=x; c=z;
    }
    else{
        b=x; c=y;
    }

    if(a*a == b*b+c*c){

        return true;

    }
    else{
        return false;
    }
    



}


int main(){

int a,b ,c;

cout<<"Please enter the first side";
cin>>a;

cout<<"Please enter the second side";
cin>>b;

cout<<"Please enter the third side";
cin>>c;

if (check(a,b,c))
{
    cout<<"Pythagoran Triplets";

}
else{
    cout<<"Not Pythagoran Triplets";
}








}