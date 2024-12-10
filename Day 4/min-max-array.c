#include<stdio.h>
int main(){
    int size;
    printf("Enter the number of elements:");
    scanf("%d",&size);
    int arrrOfNUM[size];
    printf("Enter %d elements into an array:",size);
    for(int i=0;i<size;i++)
       scanf("%d",&arrrOfNUM[i]);
    }
    int max = arrrOfNUM[0];
    printf("The largest element in the given array is:");
    for(int i=0;i<size;i++){
        if(arrrOfNUM[i]>max){
            max=arrrOfNUM[i];
        }
    }
    printf("%d",max);
  
printf("The largest element in the given array is:%d\n", max);
printf("The smallest element in the given array is:%d\n", min);



