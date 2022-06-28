#include<stdio.h>

bool isChar(char c)
{
	return ((c>='a' && c<='z') || (c>='A' && c<='Z'));
}

bool isLine(char c){
	return (c=='_' || c=='-');
}
bool isDigit(char c)
{
	return (c>='0' && c<='9');
}
 
int main()
{
    char str[5],c;
    int i=0;
 
  

	while(i<5){
		  
		  printf("\nenter the character :");
		  scanf("%c",&c);
		  
		  if(isChar || isLine || isDigit){
		  	str[i]=c;
		  	i++;
		  }
		  
		  getchar();
	}
	
	printf("string : %s\n",str);
    return 0;
}

