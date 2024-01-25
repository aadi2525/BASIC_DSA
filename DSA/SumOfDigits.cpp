#include<iostream>
using namespace std;

int sum(int n){
if(n==0){
    return 0;

}
int assumtion =sum(n/10);  //IT  DOES NOT GIVE ANY POINT (it removes after point number)
int last_dig = n%10;
return assumtion+last_dig;

}

int main(){
    cout <<sum(55);
    return 0;
}
















