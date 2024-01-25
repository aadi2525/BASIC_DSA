#include<iostream>
using namespace std;

void print(int n){
    if(n==0){return  ;}

    cout<<n<<endl;  //assending and desending order is depend on this line.
// if n gets printed first for ex 5 next n-1=4 like that creates desending orders.

    
    print(n-1);

}

int main(){
    
    print(5);
    
    return 0;

}