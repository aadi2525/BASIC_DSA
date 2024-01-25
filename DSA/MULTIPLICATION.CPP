#include<iostream>
using namespace std;

int multi(int n,int m){
    if(n==0){
        return 0;
    }

    int assumtion = multi(m,n-1);
    return m+assumtion;
}

int main(){
    cout<<multi(5,2);
    return 0;
}