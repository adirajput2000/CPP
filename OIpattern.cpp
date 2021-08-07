#include<iostream>
using namespace std;

int main(){

    int k  = 0;
    int a;
    cout<<"Please enter a number";

    cin>>a;

    for (int i = 1; i <=a ; i++)
    {
        if(i%2==0){
            k=1;
        }
        else{
            k=0;
        }
        for (int j = 1; j <=i; j++)
        {
            
            if(k==1){
                k = 0;
            }
            else{
                k=1;
            }
            cout<<k <<" ";



        }

        cout<<endl;

        
    }
    





}