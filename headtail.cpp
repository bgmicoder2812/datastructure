#include<iostream>
using namespace std;

void fun1(int n){
    
    if(n>0){
        fun1(n-1);
        cout<<n<<"\t";

        
    }
}
#should add comment in your codes
int main(){
    int n = 3;

    fun1(n);
    return 0;
}
