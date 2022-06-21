#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the number of digits: ";
    cin>>n;
    cout<<"enter the number: ";
    cin>>num;
    
    int i=1;
    while(i<=n){
        int temp = num%10;
        num=num/10;
        int j=1;
        while(j<=temp){
            cout<<"#";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
