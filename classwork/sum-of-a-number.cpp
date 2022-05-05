int main(){
int n;
cin>>n;
int sum=0;
while(n>0){
    int temp = n%10;
    sum=sum+temp;
    n=n/10;

}
cout<<sum;
return 0;
}
