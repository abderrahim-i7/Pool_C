#include<stdio.h>

int sum_digits(int n){
    if(n==0){
        return 0;
    }else{
        return n + sum_digits(n-1);
    }
}
int main(){
    int sum=sum_digits(5);
    printf("%d",sum);
}