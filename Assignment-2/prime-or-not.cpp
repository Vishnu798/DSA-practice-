#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count!=2){
        return 0;

    }
   return 1;
    
}
int main() {
    for(int i=1;i<30;i++){
         if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
         }
         else{
            cout<<"the number "<<i<<" is not prime\n";
         }   
    }
    return 0;
}
