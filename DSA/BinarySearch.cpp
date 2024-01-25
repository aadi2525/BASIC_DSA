#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int key){
    int s = 0,  e = n-1;
    while(s<=e){
int mid=(s+e)/2;   //s+ (e-s)/2 for big integer this mid formula use

        if(a[mid] == key){
            return mid;
        }
        else if (a[mid]>key)
        {
            e= mid -1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}


int main(){
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int key;
cout<<"enter a key ";
cin>>key;


sort(a,a+n);
for(int i=0;i<n;i++){

cout<<a[i]<<" "<<endl;
}
int posi = BinarySearch(a,n,key);
if(posi == -1){
    cout<< "key is not present"<< endl;

}else{
    cout<<"The key is at index "<< posi <<endl;
}

return 0;

}
    
