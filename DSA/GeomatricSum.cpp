#include<bits/stdc++.h>
using namespace std;

double claculation( int k){

    if(k==0){
return 1;
    }
    double assumtion = claculation(k-1);

    return assumtion + 1.0/pow(2,k);
}

int main(){

    cout<<claculation(3);
    return 0;
}