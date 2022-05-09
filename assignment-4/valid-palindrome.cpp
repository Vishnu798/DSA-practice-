class Solution {
public:
    bool isPalindrome(string s) {
      string res;
		for(int i=0;i<s.size() ; i++){
			if(s[i] >= 'a' && s[i]<='z' || s[i] >= '0' && s[i]<='9') 
                res+=(s[i]);
			if(s[i] >= 'A' && s[i]<='Z') res+=(s[i]-'A'+'a');
		}
        int lens = res.size();
		for(int j=0;j<lens/2;j++){
			if(res[j] != res[lens-j-1]) return false;
		}
        return true;
        
    }
};
