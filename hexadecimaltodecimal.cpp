#include<bits/stdc++.h>
using namespace std;


int hexadecimal(string x){

int s = x.size();
int j= 1;
int ans = 0;

for(int i = s-1; i>=0; i--){


    if(x[i]>= '0' && x[i]<= '9'){

        ans = ans + j*(x[i]-'0');

        

    }
    else if (x[i]>='A' && x[i]<='F'){

        ans += j*(x[i]-'A' +10);



    }
    j *= 16;
    


}


return ans;




}



int main(){


    string a;
    cout<<"Please enter a hexadecimal number -";
    cin>>a;

    cout<<hexadecimal(a);



}