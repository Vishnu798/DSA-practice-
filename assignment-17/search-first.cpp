#include<bits/stdc++.h>
using namespace std;
bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    int flag;
    int begin=0;
    int end=A.size()-1;
    while(begin < end){
        int mid = (begin+end)/2;
        if(A[mid] == target){
            flag=1;
            return true;
        }
        else if(A[mid] > target){
            end = mid-1;
        }
        else{
            begin = mid+1;
        }

    }
    if(flag==1){
        cout<<"true";
        return true;
    }
    else{
        return false;
    }
    
   
}
int main(){
    int n,a,t;
    cout<<"enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<"enter the target ele : ";
    cin>>t;
    bool result = isTargetPresent(arr, t);
    cout<<result; 

    return 0;
}
