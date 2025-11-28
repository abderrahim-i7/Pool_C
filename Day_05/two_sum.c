#include<stdio.h>
void two_sum(int arr[],int size,int target){
    int i,j;
    for(i=1;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                printf("[i= %d, j= %d]\n",i,j);
            }
        }
    }
}
void main(){
    int arr[]={2,7,11,15};
    int target =22;
    int size=4;
    two_sum(arr,size,target);
}