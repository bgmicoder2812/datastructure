#include<iostream>
using namespace std;

int fact(unsigned long long num){
 if(num == 1){
     return 1;
 }
 else{
     unsigned long long ans = 1;
     for(unsigned long long i = 1; i<=num; i++){
         ans = ans*i;
     }
     return ans;
      

    }
}

int main(){
    unsigned long long num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<fact(num);

    return 0;
}