//EX:-// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1      its a happy number


#include<iostream>
using namespace std;
 // not correct method
// int solve(int n){
//    int sum=0;     //sum
//    while(n!=0){       
//    int x=n%10;  ///it gives last number
//    sum+=x*x;  
//   n=n/10;  //it cuts the last digit.
//    }

//    return sum;
// }

// bool check(int n){
//     if(n==1){
//         return true;
//     }else if(n==4){
//         return false;
//     }else{
//         return check(solve(n));
//     }
// }


    // Used 1 or 4 logic; Can also keep a track of sums to avoid loops by using hashmaps

    // To calculate the sum of digits
    int digits_sum(int num){
        int dig = 0;
        while(num>0){
            dig += (num%10)*(num%10);
            num = num/10;
        }
        return dig;
    }

    bool isHappy(int n) {
        // int sum = n;
        
        while(n!=1){
            n = digits_sum(n);
            if(n == 1)   return true;
            else if(n == 4)   return false;
        }
        return true;
    };


int main(){

    int n =2;
digits_sum(n);
   cout<< isHappy(n);
   if(isHappy(n)==true){
    cout<<" true"<<endl;
   }else{
    cout<<" false"<<endl;

   }

    return 0;
}