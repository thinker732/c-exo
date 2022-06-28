#include<stdio.h>

struct car{
  char mark[20];
  char rank;
  float weight;
  float size;
  int conso;
};

struct car mycar;
int main() {
  printf("enter your car data\n");
  
  
  printf("mark:");
  scanf("%s",mycar.mark);
  
  printf("rank(D-S):");
  scanf("%c",&mycar.rank);
  getchar();
  
    printf("weight:");
  scanf("%f",&mycar.weight);
  
  printf("size in m:");
  scanf("%f",&mycar.size);
  
   printf("consomation (in L):");
  scanf("%f",&mycar.conso);


  printf("car properties:"); 
  printf("\nmark %s",mycar.mark);
  printf("\n rank %c",mycar.rank);
  printf("\n weight %f",mycar.weight);
  printf("\n size %f",mycar.size);
  printf("\n consomation: %d",mycar.conso);
   
  return 0;
}

