#include <stdio.h>
 
 bool isChar(char c)
{
	return ((c>='a' && c<='z') || (c>='A' && c<='Z'));
}

int main()
{
    char s[1000];  
    int  i,j,k,count=0,n;
 
    printf("Enter  the string : ");
    scanf("%s",s);
     
    for(j=0;s[j];j++);
	 n=j; 
    
	printf(" frequency count character in string:\n");
 	printf(" _ _ _ _ _ \n ");
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i] && isChar(s[i]))
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      
	      printf("\n| '%c' | %d |",s[i],count);
 
	       
	   
       }
	
	   
 	} 
 	 printf("\n _ _ _ _ _ \n");
 	 
     
    return 0;
}

