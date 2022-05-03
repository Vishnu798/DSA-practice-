void plusMinus(vector<int> arr) {
    int countPositive=0;
    int countNegative=0;
    int countZero=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > 0){
            countPositive++;
        }
        else if(arr[i] < 0){
            countNegative++;
        }
        else{
            countZero++;
        }
    }
printf("%.6f\n",(double)countPositive/arr.size());
printf("%.6f\n",(double)countNegative/arr.size());
printf("%.6f\n",(double)countZero/arr.size());
}
