#include<iostream>
using namespace std;

int digits(int n){
if(n==0){
    return 0;
}

int count =digits(n/10);

return 1+count;


}


int main(){
    cout<<digits(5252545);
    return 0;
}