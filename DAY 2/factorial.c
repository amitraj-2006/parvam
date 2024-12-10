#include<stdio.h>
int main(){
    int num, fact=1;
    printf("Enter a number to find the factorial:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
       fact=fact*i;
    }
    printf("Factorial of %d: %d", num,fact);
    //printf( "Factorial of  %d: %IIu", num,fact);
}
//num = 5
//step 1: i = 1, 1 < = 5 - T
//        fact =  1*1 = 1
//step 2: i = 2, 1 < = 5 - T
//        fact =  1*2 =2
//step 3: i = 3, 3 < = 5 - T
//        fact =  1*3 =6   
//step 4: i = 4, 4 < = 5 - T
//        fact =  6*4 =24   
//step 5: i = 5, 5 < = 5 - T
//        fact =  24*5 =120
//step 6: i = 6, 6 < = 5 -F
//            stop     
       
