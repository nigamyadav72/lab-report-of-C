#include<stdio.h>
#include<string.h>
int compare(char str1[],char str2[])
{
    int flag=0,len1,len2;
    int i;
    if(strcmp(str1,str2)==0)
      return flag=0;
    else if(strcmp(str1,str2)==1)
      return flag++;
    
    
}

int main(){
    char str1[30],str2[30];
    int flag;
    printf("enter the strings:");
    gets(str1);
    printf("Enter another string:");
    gets(str2);
    flag=compare(str1,str2);
    printf("%d",flag);
    if(flag==0)
     printf("same string\n");
    else
     printf("different string");
    return 0;
}