#include<stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==n){
            return i;
        }else{
            printf("ne trouve pas\n");
            for(i=0;i<size;i++){
                if(n<arr[i]){
                    return i;
                }
            }
        }
    }
}
int main(){
    int T[]={1,2,4,5};
    int res=if_insert_pos(T,sizeof(T),3);
    printf("indice :%d",res);
}