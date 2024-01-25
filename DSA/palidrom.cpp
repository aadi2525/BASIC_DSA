//palidrom means from both side the number or char are same
//for example 123321, 12321,775525577 like that

#include<iostream>
using namespace std;

bool palidrom(int a[],int s,int e){
if(s>e){
    return true;
}
   if(a[s]==a[e]){
    return true;
    palidrom(a,s+1,e-1);
   }
   else{
    return false;
   }

}

int main(){
int a[]{1,2,3,4,5,4,3,2,1,0};

cout<<palidrom(a,0,9);

    return 0;
}