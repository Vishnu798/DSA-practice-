#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        int j=n;
        while(j>0){
            cout<<"#";
            j--;
        }
        cout<<endl;
        n=n/2;
    }
    return 0;
}
