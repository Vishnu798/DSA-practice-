void printVector( int n, vector<int>A){
    for(int a:A) 
    cout<<a<<" ";
    cout<<"\n";
    
}

void insertionSort2(int n, vector<int> arr) {
 int temp,j;
   for(int i=1; i<n;i++){
      temp=arr[i];
      
      j=i-1;
      while(j>=0 && arr[j] > temp){

      arr[j+1] = arr[j];
     
      j--;

  }
  arr[j+1] = temp;
   printVector(n, arr);
}
  }
  
