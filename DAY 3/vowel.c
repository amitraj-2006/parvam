#include<stdio.h>
int main(){
    char alphabet;
    printf("enter any alphabet:");
    scanf("%c", &alphabet);
    switch(alphabet)
    {
        case'a':case 'e':case'i':case'o':case'u':
        case'A':case'E':case'I':case'O':case'U':
        printf("you've enterd the vowel");
        break;
        default:
        printf("you've enterd the consonant or other character");
        break;
    }
}
