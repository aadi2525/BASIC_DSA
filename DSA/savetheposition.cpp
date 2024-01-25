#include<bits/stdc++.h>
using namespace std;

void saveposition(int a[],int n, int k,int i,vector <int> &ans){
    if(i==n){
        return ;
    }
    if(a[i]==k){
      ans.push_back(i);
    }
    saveposition(a,n,k,i+1,ans);
}

int main(){
    int a[]= {1,2,3,4,5};
    vector<int>v;
    saveposition(a,5,5,1,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
return 0;

}