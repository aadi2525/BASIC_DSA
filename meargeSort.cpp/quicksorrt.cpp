#include<iostream>
using namespace std;

int  partition(int a[],int s,int e){
    int x=a[e];
    int i=s;

for(int j=s;j<=e-1;j++){
    if(a[j]<x){
        swap(a[i],a[j]);
        i++;

    }
    swap(a[i],a[e]);
    return i;

}


}

void quicksort(int a[],int s,int e){

if(s>=e){
    return ;
}
int p=partition(a,s,e);
partition(a,s,p-1);
partition(a,p+1,e);


}


int main(){

    int a[]={1,4,3,7,9,3,0};
    quicksort(a,0,6);

    for(int i=0;i<=7;i++){
        cout<<i<<" ";

    }



    return 0;

}