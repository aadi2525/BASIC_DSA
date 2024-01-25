#include<iostream>
using namespace std;

void subsequance(string input,string output){
if(input.length()==0){
    cout<<output<<endl;
    return;
}

subsequance(input.substr(1),output);  //excluding
subsequance(input.substr(1),output+input[0]); //including
}

int main(){
    string input;
    cin>>input;
    string output="";
    subsequance(input,output);

    return 0;
}