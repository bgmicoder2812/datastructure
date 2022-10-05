#include "iostream"

using namespace std;

long long fact(int f){
    if(f==0){
        return 1;
    }
    return f* fact(f-1);
}

int main(){
    cout<<"Factorial Using Recursion";
    cout<<fact(4);
}
