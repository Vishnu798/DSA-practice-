#include<bits/stdc++.h>

using namespace std;

int main(){

string s = "abcde";
for(int i=0; i<s.length();i++){
    cout<<s[i]<<" ";
}
cout<<endl;
for(int i=0;i<s.length()/2;i++){
   swap(s[i], s[s.length()-1-i]);
}
for(int i=0; i<s.length();i++){
    cout<<s[i]<<" ";
}
return 0;
}
