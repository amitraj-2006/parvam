#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int arr["Enter the size of an array:"];
    for(int i=0; I<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i,size;i++){
        sum+=arr[i];
    }
    printf("The sum of array elements is:%d",sum);
}