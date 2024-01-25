#include<iostream>
using namespace std;

bool check(int a[],int n,int k){         //checking number is present or not
if(n==0){
    return false;
}

if(n==k){
    return true;
}
int assumtion = check(a+1,n-1,k);

return assumtion;

}

int index(int a[],int n,int k,int i){           //fiding index

if(i==n){
    return -1;

}


if(a[i] == k){

return i;
}

int calculation = index(a,n,k,i+1);
return calculation;
}

int main(){

    int a[]={1 , 2 ,3,4,5,7};
    if(check(a,7,2)){
        cout<<"found it"<<endl;
    }
    else{
        cout<<"not found it"<<endl;

    }
    cout<<"index at "<<index(a,7,7,0);
    return 0;

}