#include<stdio.h>
#include<stdlib.h>

  char email[50]="\0";

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

bool is_valid(){
		
		if(!isChar(email[0])){
			return 0;
		}
	// to store position of At and Dot
    int At = -1, Dot = -1;
  
    for (int i = 0;
         i <sizeof(email); i++) {
  
        if (email[i] == '@') {
  
            At = i;
        }
  
        else if (email[i] == '.') {
  
            Dot = i;
        }
    }

    if (At == -1 || Dot == -1)
        return 0;
  
    if (At > Dot)
        return 0;
  
    return !(Dot >= (sizeof(email) - 1));	
		
}

int main()
{
	
    int size = 0;
 
 
    printf("enter the string:\n");
    scanf("%s",email);
    
    if(is_valid()){
    		printf("valid");
	}
	else{
		printf("not valid");
	}
    return 0;
}
