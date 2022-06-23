#include<bits/stdc++.h>
using namespace std;

    bool search(vector<vector<int>> D, int r, int c, int target){
        int flag;
        for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){

            if(D[i][j] == target){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        return true;
    }
    else{
        return false;
    }
    }
    int main(){
    int r,c,ele,flag,target;
    cout<<"enter the rows : ";
    cin>>r;
    cout<<"enter the columns : ";
    cin>>c;
    vector<vector<int>> A;
    for(int i=0;i<r;i++){
        vector<int> a;
        for(int j=0;j<c;j++){
            cin>>ele;
            a.push_back(ele);
        }
        A.push_back(a);
    }
    cout<<"enter the target ele : ";
    cin>>target;
    bool result = search(A, r, c, target);
    cout<<result; 
  
    return 0;
}
