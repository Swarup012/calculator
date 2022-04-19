#include <stdio.h>

int main(){
    int number;
    printf("enter the number of your results:",number);
    scanf("%d",&number);

    if (number<20){
        printf("you are fail because your number is %d \n",number);
    }
    else if (number>50){
        printf("you are pass because your number is %d \n",number);
    }
    else if (number<80){
        printf ("nice good work!\n ");
    }
    if (number>80&&number<100){
        printf("you are a really good student\n ");
    }
    if (number==100){
        printf("you are a really inteligent student\n ");
    }
    
    
    return 0;
}