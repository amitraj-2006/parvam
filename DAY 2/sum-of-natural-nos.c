#include<stdio.h>
int main(){
    int num, sum=0;
    printf("Enter a positive nuumber:");
    scanf("%d", &num);
    for(int i=0; i<=num;i++){
        sum=sum+i;
    }
    printf("The sum of natural number from 0 to %d is: %d",num,sum);
}
    
