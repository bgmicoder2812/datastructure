#include<iostream>
using namespace std;


int fact(int num){
 if(num == 1){
     return 1;
 }
 else{
     int finalans = 1;
     for(int i = 1; i<=num; i++){
         finalans = finalans*i;
     }
     return finalans;
      

    }
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<fact(num);

    return 0;
}
