#include<stdio.h>
#include<string.h>
int main(){
    char str[20],rev[20];
    printf("Enter any word:");
    scanf("%S",str);
    printf("original string: %s\n",str);
    stcpy(rev,str);
    strrev(str);
    printf("reversed string: %s\n", str);
    if(strcmp(str,rev) == 0){
        printf("The given word is a palindrome");
    }
    else{
        printf("The given word is not a palindrome");
    }
}

