//recution is a process of dividing big task into small tasks in same method(it calls a same method repetedly)
/*for every recurtion problem we can use three steps by using principal of mathamatical induction(PMI)
1) base case (prove f(0) or f(1) is true)
2) assumtion  (f(k) is true assume that)
3)calculation  (using step 2 prove f(k+1) is true)*/


#include<iostream>
using namespace std;

int recurtion(int n){

    cout<<n<<endl;
    if(n==0) return 1;  // it is used the loop will go in negative state do the factorial of 0 is 1
    //it can gives infinite loop for negative numbers so we can use 
    if(n<0) return -1;

    int factorial = recurtion(n-1);
    return n*factorial;
}


int main(){
    int n;
    cin>>n;
    int fact = recurtion(n);
    cout<< fact<<endl;
}