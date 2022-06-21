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
                for(int i = 1; i < nums.size(); i++)
                {
                    
                    l = mid - i;
                    //cout<<"leftside number is : "<<nums[l]<<"\n";
                    r = mid + i;
                   //  cout<<"rightside number is : "<<nums[r]<<"\n";
                    if(r < nums.size())
                    {
                        if(nums[r] == target)
                            index.push_back(r);
                    }
                    
                    if(l >= 0)
                    {
                        if(nums[l] == target)
                         //   cout<<"leftside number is : "<<nums[l]<<"\n";
                            index.push_back(l);
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
