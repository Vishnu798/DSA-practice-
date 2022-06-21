#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum+=i;
        int current =sum;
        cout<<"sum is : "<<sum<<endl;
        while(current!=0){
            cout<<"#";
            current--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
