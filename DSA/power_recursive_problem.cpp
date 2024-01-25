#include<iostream>
using namespace std;

int power(int x, int n){
    if(n==0){return 1;} //case 1
    // if(n==1){return 1;}

    int assumtion=power(x,n-1); //case 2

    return x* assumtion;  //case 3

}

int main(){
    cout<<power(5,3);
    return 0;
}