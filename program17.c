#include <stdio.h> 

int main(){
  
  int nbr1,nbr2,choice;  
  
 	printf("Enter the first number : ");  
  	scanf("%d",&nbr1);
  	
  	printf("Enter the second number : ");  
  	scanf("%d",&nbr2);
  	
  	printf("\n choose the macro : ");  
  	printf("\n -------------------------------------- ");  
  	printf("\n marco 1:addition ");  
  	printf("\n marco 2:substraktion "); 
  	printf("\n marco 3: multiplication "); 
  	printf("\n marco 4: division"); 
  	printf("\n --------------------------------------\n ");  
  	scanf("%d",&choice);
 	switch(choice){    
		case 1:    
			printf("%d + %d = %d ",nbr1,nbr2,nbr1+nbr2) ; 
 		break;    
		case 2:    
     		printf("%d - %d = %d ",nbr1,nbr2,nbr1-nbr2) ; 
 		break;  
		case 3:    
     		printf("%d x %d = %d ",nbr1,nbr2,nbr1*nbr2) ; 
 		break;
		case 4:    
     		if(nbr2==0){
     			printf("not allowed") ; 
			 }
			 else{
			 	printf("%d / %d = %f ",nbr1,nbr2,nbr1/nbr2); 
			 }
 		break;   
    	default:     
 			printf("\n unavailable choice") ;   
}  	
 	

 	return 0;
 
}

