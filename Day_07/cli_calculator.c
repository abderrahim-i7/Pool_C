#include<stdio.h>
#include<math.h>

float  add(float x,float y){
    return x+y;
}
float  sub(float x,float y){
    return x-y;
}
float  multp(float x,float y){
    return x*y;
}
float  div(float x,float y){
    if(y==0){
    return 0;
    }else{
         return x/y;
    }
}
int  mod(int x,int y){
    return x%y;
}
double factor(int n) {
    if(n<0){
        return -1;   
    }else if(n==0||n==1)
        return 1;
    else{
        return n*factor(n-1);
    }
}
void main(){
    float result1 ,x,y;
    int choix,n,fact;
    double result;
    do{  
        printf("\n========================== Calcule Simple ============================\n");
        printf("1=>Addition [+]\n");
        printf("2=>Substraction [-]\n");
        printf("3=>Division [/]\n");
        printf("4=>Modulo [mod]\n");
        printf("5=>Sqrt\n");
        printf("6=>Power (x^n)\n");
        printf("7=>Factorial\n");
        printf("8=>Exit");
        printf("\n==================================================================");
        printf("\n\t\t\t\t\tEntrez choix :");
        scanf("%d",&choix);
        switch(choix){
            case 1:
                printf("sisaire x:");
                scanf("%f",&x);
                printf("sisaire y:");
                scanf("%f",&y);
                result1=add(x,y);
                printf("%.2f + %.2f = %.2f",x,y,result1);
                printf("\n");
                break;
            case 2:
                printf("sisaire x:");
                scanf("%f",&x);
                printf("sisaire y:");
                scanf("%f",&y);
                result1=sub(x,y);
                printf("%.2f - %.2f = %.2f",x,y,result1);
                printf("\n");
                break;
             case 3:
                printf("sisaire x:");
                scanf("%f",&x);
                printf("sisaire y:");
                scanf("%f",&y);
                result1=div(x,y);
                if(result1==0){
                    printf("cant divise sur zero\n");
                }else{
                    printf("%.2f / %.2f = %.2f",x,y,result1);
                    printf("\n");
                    break; 
                }
            case 4:
                printf("sisaire x:");
                scanf("%f",&x);
                printf("sisaire y:");
                scanf("%f",&y);
                result1=mod(x,y);
                printf("%.2f mod %.2f = %.2f",x,y,result1);
                printf("\n");
                break;
            case 5:
                printf("sisaire x:");
                scanf("%f",&x);
                if(x>=0){
                    result1=sqrt(x);
                    printf("sqrt(%.2f) = %.2f",x,result1);
                }else{
                    printf("Erreur %.f<0 impossible de calculer la racine carree d un nombre negatif  ",x);
                }
                printf("\n");
                break;
            case 6:
                printf("sisaire x:");
                scanf("%f",&x);
                printf("sisaire la puissance n:");
                scanf("%d",&n); 
                result1=pow(x,n) ;
                printf("pow(%.f,%d) = %.f",x,n,result1);
                break;
            case 7:
                printf("Saisir x:");
                scanf("%f",&x);
                result=factor((int)x);
                if(result<0){
                    printf("Erreur!\n");
                }else{
                    printf("factor(%.0f) = %.0f\n", x, result);
                }break;
            case 8:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide!\n");
        }
    }while(choix!=8);
    printf("Merci pour utilistion mon calcur\n");
}


   
