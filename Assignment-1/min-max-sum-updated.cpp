void miniMaxSum(vector<int> arr){
    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());
    long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        cout<<sum-max<<" "<<sum-min;
}
