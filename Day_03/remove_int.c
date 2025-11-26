#include<stdio.h>

void remove_int(int arr[], int size, int target) { 
    int novsize=0;
    
    for (int i=0;i<size;i++) {
        if (arr[i]!=target) {
            arr[novsize]=arr[i];
            novsize++;
        }
    }
    printf("apres remove\n");
   for(int i=0;i<novsize;i++){
    printf("|%d",arr[i]);
   }

}

int main(){
    int T[]={2,2,8,6};
    remove_int(T,sizeof(T),2);
}