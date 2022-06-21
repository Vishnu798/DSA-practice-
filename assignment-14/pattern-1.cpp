#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number of rows : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(i>=j){
        cout<<"#";
        j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
