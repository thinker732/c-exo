#include <stdio.h> 

int main(){
  
  int nbr,i,min,max;  
  
 
  for(i=0; i<10; i++)  
  {  
  
  	printf("Enter the number: ");  
  	scanf("%d",&nbr); 
	   
  	if(i==0){
  		max=nbr;
  		min=nbr;
  		continue;
	}
	  
    
	if(nbr<min){
		min=nbr;
	}
	else if(nbr>max){
		max=nbr;
	}  
	
	} 
 	
 	
 printf("min=%d max=%d",min,max);  	
 	return 0;
 
}

