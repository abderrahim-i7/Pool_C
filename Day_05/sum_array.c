#include<stdio.h>
int sum_array(int arr[]){
    
    int i,sum=0;
    for(i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[]={1,2,3,4,5,1};
    int sum=sum_array(arr);
    printf("sum=%d",sum);
    return 0;
}