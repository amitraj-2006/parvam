#include<stdio.h>
#includ<string.h>
int main(){
    char f_name[20],i_name[20],name[50];
    printf("Enter your first  name:");
    scanf("%s", f_name);
    printf("Enter your last name:");
    scanf("%s",i_name);
    strcpy(name,f_name);
    strcat(name, i_name);
    printf("full name:%s\n",name:);
    printf("full name:%s %s" ,f_name,i_name:);
    printf("full name in uppercase:%n",strupr(name));
    printf("full name in Lowercase:%n",strlwr(name));
    printf("full name is reversed:%s",strrev(name));
}
    




