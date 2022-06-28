#include <stdio.h>

int main()
{
  char chr='1';
  
 	do {
 		printf('enter your character :');
  		scanf("%c",&chr);
		printf("%c \n",(chr+3));  	
	}while(chr!='?')   ;
	
  return 0;
}

