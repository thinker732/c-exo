#include <stdio.h>

bool isChar(char c)
{
	return ((c>='a' && c<='z') || (c>='A' && c<='Z'));
}
int main() {
  
   int nbr;
   char alpha[2][25]={"ABCDEFGHIJKLMNOPQRSTUV","CDEFGHIJKLMNOPQRSTUVAB"};
   
   char str[20];

   printf("\nEnter a string : ");
   scanf("%s",str);

printf("\n codage: ");

  for (int j = 0;j <sizeof(str) && str[j]!=','; j++) {
  		for (int i = 0;i <25; i++) {
       			 if (alpha[0][i]==str[j] && isChar(alpha[0][i]) ) {
       			 	printf("%c",alpha[1][i]);
          			 //printf("\n c=%c",alpha[1][i]);
       			 }
    	}
       
    }
    
    
   return 0;
}
