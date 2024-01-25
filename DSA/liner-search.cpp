#include<iostream>
using namespace std;

int linerSearch(int a[],int n,int key){
    int index;
    for(int i=0;i<n;i++){
        if(a[i] == key){
            return i;
        }
       
    }
        return -1;
}



int main(){
int n;
cin>>n;

int a[n];
for(int i=0;i<=n-1;i++){
    cin>>a[i];

}
int key;
cout<< "Enter a key"<<endl;
cin>>key;
int position = linerSearch( a, n , key);
if(position == -1){
    cout<<"not exit";
}else{
    cout<<"index is  "<< position <<endl;
}





    return 0;
}
