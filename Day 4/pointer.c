#include<stdio.h>
int main(){
    int num = 28;
    printf("The value of number: %d\n",num);
    printf("The address of number(%d):%p\n",num,&num);
    int*ptr = &num;
    printf("T%he address of pointer:%p\n",ptr);
    printf("The value of pointer:%d\n",*ptr);
    *ptr=30;
    printf("The updated value of number:%d\n",num);
}