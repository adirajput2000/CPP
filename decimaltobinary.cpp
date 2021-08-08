#include<bits/stdc++.h>
using namespace std;


int binary(int a){

    int rem;
    int p = 0;
    int answer[100];
    int i=0;
    int j =0;
    

    while(a>0){

        rem = a%2;
        answer[i] = rem;
        i++;
        a = a/2;
        p++;




    }

    int ans[p];

 while(a>0){

        rem = a%2;
        ans[j] = rem;
        j++;
        a = a/2;




    }

    for(i=p-1; i>=0; i--){

        cout<<answer[i];

    }







}


int main(){


    int a ;
    cout<<"Please enter a number - ";
    cin>>a;


    binary(a);





}