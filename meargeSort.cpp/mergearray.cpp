#include<iostream>
using namespace std;


void combinesort(int a[],int x[],int y[],int s,int e){

int mid=(s+e)/2;
int i =s;
int j=mid+1;
int k=s;

while(i<=mid && j<=e){
if(x[i]<y[j]){
    a[k]=x[i];
    k++;
    i++;
}else{
    a[k]=y[j];
    k++;
    j++;
}

}
while(i<=mid){
       a[k]=x[i];
    k++;
    i++;
}
while(j<=e){
     a[k]=y[j];
    k++;
    j++;

}

}


void mergesort(int a[],int s,int e)
{
if(s>=e){
    return ;
}


    int mid=(s+e)/2;
    int x[100];
    for(int i=s;i<=mid;i++){
         x[i]=a[i];
       
    }
int y[100];
    for(int i=mid+1;i<=e;i++){
         y[i] =a[i];
       
    }

mergesort(x,s,mid);
mergesort(y,mid+1,e);
combinesort(a,x,y,s,e);


}

int main(){
    int a[]={1,0,3,5,6,7,9,2};
    mergesort(a,0,7);

    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }



    return 0;
}