#include<iostream>
using namespace std;

void removeConsigativeDupicates(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!=input[1]){
        removeConsigativeDupicates(input+1);

    }else{
        for (int i=0;input[i]!='\0';i++){
            input[i]=input[i+1];

        }
        removeConsigativeDupicates(input);
    }

}

int main(){
    char input[100];
    cin>>input;
    removeConsigativeDupicates(input);
    cout<<input<<endl;

    return 0;
}