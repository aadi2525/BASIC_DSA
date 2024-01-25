#include<iostream>
using namespace std;

int firstIndex(int a[],int n,int k,int i){ //it finds the element from starting

if(i==n){return -1;}

if(a[i]==k){
    return i;
}

int finding=firstIndex(a,n,k,i+1);
return finding;


}

int lastIndex(int a[],int n,int k){
    if(n==0){
        return -3;

    }
    if(a[n-1]==k){
        return n-1;
    }
return lastIndex(a,n-1,k);
 
}




int main(){
    int a[] = {1,5,3,2,5};
    cout<<firstIndex(a,5,5,1)<<endl;
    cout<<lastIndex(a,5,5);
    return 0;
}