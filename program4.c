#include<stdio.h>

int main()
{
    char str[]="\0";
    int size = 0;
 
 
    printf("enter the string:\n");
    scanf("%s",str);
    char i;
    char current = 0;
 
    do
    {
        current = str[size];
        size++;
 
    }
    while(current == '\0');
    
    size--;
    
    if(size<4){
    	printf("too short");
	}else  if(size>10){
    	printf("too long");
	}
 
 
    return 0;
}
 


