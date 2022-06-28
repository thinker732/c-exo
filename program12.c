#include <stdio.h>


int main() {
  
   int nbr;
   char chr[]="abcdefghijklmnopqrstuvwxyz";
   
   printf("\nEnter the number : ");
   scanf("%d",nbr);
     
  
    
      
      if(nbr>0 && nbr<=26) {
        printf("\n letter : %c",chr[nbr]);
      }
      else{
      	printf("\n not allowed");
	  }
   

   
   return 0;
}
