//recurtion problem 1
//fibonakki number means it will show the value of the given number in fibonakki series
#include<bits/stdc++.h>
using namespace std;

int fabi(int n){
    if(n==0){return 0;}  //step 1 1) base case (prove f(0) or f(1) is true)
    if(n==1){return 1;}


// 2) assumtion  (f(k) is true assume that)
    int assumtion_1=fabi(n-1); 
    int assumtion_2=fabi(n-2);

// 3)calculation  (using step 2 prove f(k+1) is true)*/
    return assumtion_1+assumtion_2;

}


int main(){
    cout<<fabi(10);
    return 0;
}
