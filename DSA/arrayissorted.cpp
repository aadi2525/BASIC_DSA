#include<iostream>
using namespace std;

bool issorted(int a[],int n){

    if(n==0 || n==1){
        return true;
    }


    if(a[0]>a[1]){
        return false;
    }

    bool sorted = issorted(a+1,n-1);


return sorted;

}

int main(){
   int  a[]={1,2,3,4,5,0};
    if(issorted(a,6)){
        cout<< "sorted"<<endl;
    }else
      {  cout<< "not sorted"<<endl;}
    return 0;
}