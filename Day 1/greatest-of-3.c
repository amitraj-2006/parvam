#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter any 3 number:");
    scanf("%d %d %d", &num1,&num2, &num3);
    //first method-Nested if
    //if(num1>num2){
    //    if(num1>num3){
    //        printf("frist number (%d) is greatest", num1);
    //    }
    //    else{
    //        printf("Third number (%d) is greatest", num3);
    //    }
    //}
    //else{
    //    if(num2>num3){
    //        printf("second number (%d) is greatest", num2);
    //    }
    //    else{
    //     printf("Third number (%d) is greatest", num3);
    //     }
    //}
    //second method-If-Else Ladder
    //if((num1>num2) || (num1>num3)){
    //    printf("frist number(%d) is greatest",num1);
    //}else if(num2>num3){
    //    printf("second number(%d) is greatest",num2);
    //}else{
    //    printf("third number (%d) is greatest",num3);
    //}
    //Third method-Nested Ternary
    //((num1>num2)&&(num1>num3))
        ?printf("first number (%d) is greatest",num1)
        :(num2>num3)
        ?printf("second number (%d) is greatest",num2)
        :printf("third number (%d) is greatest",num3)
        a++
        a--
        ++a
        --a
}
    






    


    
        
        
        
        
        
        
            

    
    
    
    