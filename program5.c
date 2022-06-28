#include<stdio.h>

int main()
{
    char str[]="\0";
    int size = 0;
 
 
    printf("enter the string:");
    scanf("%s",str);
   		size=sizeof(str);
   printf("\nreverse order:");
   for(int i=size;i>=0;i--){
   	 printf("%c",str[i]);
   }
 
    return 0;
}
 


