#include<iostream>
using namespace std;

// int SelectionSort(int a[],int n){

//     for(int i=0;i<=n-2;i++){   //left side

//         int smallest=i;

//         for(int j=i+1;j<=n-1;j++){ //right side
//             if(a[j]<a[smallest]){
//                 smallest = j;  //used for index purpose
//             }
//         }
//         swap(a[i],a[smallest]);
//     }

// }

// int BubbleSort(int a[],int n){         ////time complecity N▴2(squre)

// for(int count =1;count<=n-1;count++){
//     for(int i=0;i<=n-2;i++){
//         if(a[i] > a[i+1]){
//             swap(a[i],a[i+1]);
//         }
//     }

// }

// }


int Optimised_BubbleSort(int a[],int n){       //it s used to get least time 
//for time complecity its "N".

for(int count =1;count<=n-1;count++){

    int Optimised =0;
    for(int i=0;i<=n-2;i++){
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);      
            Optimised=1;           
        }
    }

if(Optimised == 0){                 //array is already sorted 
    break;                           //come out of loop
}
}

}

int main(){
int n;
cin >>n;

int a[n];
for(int i=0;i<n;i++){
    cin >>a[i];
}

// SelectionSort(a,n);
// BubbleSort(a,n);
Optimised_BubbleSort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    cout<<"Well Done "<<endl;
    




    return 0;
}