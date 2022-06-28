#include <stdio.h>
#include <conio.h>

int main()
{
	
  int i=0;
  char ch;
  char pwd[30];
  
  printf("enter sentence: \n");
  while((ch=_getch())!=13){
  	pwd[i]=ch;
  	printf("*");
  	i++;
  }
  pwd[i]='\0';
  printf("\n value: %s",pwd);
  
  return 0;
}

