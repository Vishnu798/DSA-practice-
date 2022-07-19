class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;
        sort(nums.begin(), nums.end());
        vector<int> index;
        while(start<=end){
            int mid = (start + end )/2;
            cout<<"mid is : "<<mid<<"\n";
            if(nums[mid]==target){
                cout<<"mid is now equal to target : "<<mid<<"\n";
                index.push_back(mid);
                long l, r;
                l=mid-1;
                cout<<"value of l :"<<l<<endl; 
                r=mid+1;
                cout<<"value of r :"<<r<<endl; 
                for(int i=l;i>=0;i--){
                    cout<<"go in for "<<endl;
                    if(nums[i]==target){
                        cout<<"goes in if"<<endl;
                       // cout<<nu<<endl;
                        index.push_back(i);
                    }
                    else{
                        break;
                    }
                }
                for(int i=r;i<nums.size();i++){
                    if(nums[i]==target){
                        index.push_back(i);
                    }
                    else{
                        break;
                    }
                }
                break;
             
            }
            if(nums[mid] > target){
                end = mid-1;
                cout<<"end is : "<<end<<"\n";
            }
            if(nums[mid] < target){
                start = mid + 1;
                cout<<"start is : "<<start<<"\n";
            }
            
        }
        sort(index.begin(), index.end());
         // for(int i=0;i<index.size();i++){
         //     nums[i] = index[i];
         // }
      
        return index;
    }
}; 
