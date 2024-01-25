#include<iostream>
using namespace std;

void posiblenumber(int a[],int n,int x,int i){

    if(i==n){
        return;
    }
    if(a[i]==x){
    //    cout<<i<<" "<<endl;
    }
        posiblenumber(a,n,x,i+1);

}


void occurance(int a[],int n,int x,int i,int &ans){

    if(i==n){
        return;
    }
    if(a[i]==x){
        ans++;
    }
    occurance(a,n,x,i+1,ans);
       

}


int main(){
int a[]={1,3,3,3,5};
int ans=0;


 posiblenumber(a,5,3,0);

    occurance(a,5,3,0,ans);
    cout<<ans;


    return 0;
}