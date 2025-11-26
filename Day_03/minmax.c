#include<stdio.h>
int min_max(int arr[],int taille,int choix_min0_max1){
    int i ;
    int max,min;
    min=arr[0];
    max=arr[0];
    if(choix_min0_max1==1){
        for(i=0;i<taille;i++){
            if(max<arr[i+1]){
                max=arr[i+1];
            }
        }
        return max;
    }else if(choix_min0_max1==0){
        for(i=0;i<taille;i++){
            if(min>arr[i+1]){
                min=arr[i+1];
            }
        }
        return min;
    }else{
        return -1;
        // dans la fonction main(),il faut faire un test pour verifier la variable choix_min0_max1.
        // si la fonction return -1, il faut afficher un message d erreur.
    }
}

