class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        bool flag=0;
        while(start<=end){
            mid=(start+end)/2;
            cout<<"mid is : "<<mid<<endl;
            if(nums[mid]==target){
                flag=1;
                break;
            }
            if(nums[mid]>target){
                end=mid-1;
                cout<<"end is : "<<end<<endl;
            }
            else{
                start=mid+1;
                cout<<"start is : "<<start<<endl;
            }
        }
        if(flag==1){
            cout<<"mid is returned";
            return mid;
        }
        else{
            cout<<"start is returned";
            return start;
        }
    }
};
