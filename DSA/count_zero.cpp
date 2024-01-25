#include<iostream>
using namespace std;

int count(int n){
    if(n==0){
        return 0;
    }
    int zeros=count(n/10);  //for getting single digit
    int last_digit=n%10;        //for last  digit

    if(last_digit ==0){
       return zeros+1;
    }
    else{
       return zeros;
    }
}

int main(){
    cout<<count(521254000);
    return 0;
}