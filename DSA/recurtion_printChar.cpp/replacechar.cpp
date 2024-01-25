#include<iostream>
using namespace std;

void replacearr(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]=='a'){
        input[0]='x';
    }
    return replacearr(input+1);
}

int main(){

    char input[100];
    cin>>input;

    replacearr(input);
    cout<<input<<endl;

return 0;
}