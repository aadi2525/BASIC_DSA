#include<iostream>
using namespace std;

void printchar(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    cout<<input[0];
    printchar(input+1);

}

void reveseprint(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    reveseprint(input+1);
    cout<<input[0];

}

int main() {

    char input[] ="abc";
    printchar(input);
    cout<<endl;
    reveseprint(input);
    cout<<endl;
    return 0;
}