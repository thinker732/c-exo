#include <stdio.h>

union Song {
   char album[20];
   char artist[20];
   char title[20];
   float duration;
} song;
 
int main( ) {

   union Song song;       

  printf("enter your song data\n");
  
  
  printf("album:");
  scanf("%s",song.album);

  getchar();
  printf("artist:");
  scanf("%s",song.artist);
  
  getchar();
  printf("song title:");
  scanf("%s",song.title);

  printf("duration:");
  scanf("%f",&song.duration);
  
  


  printf("song properties:"); 
  printf("\n album %s",song.album);
   printf("\n artist %s",song.artist);
    printf("\n title %s",song.title);
  printf("\n duration %f",song.duration);
  printf("\n file size %u.",sizeof(song));
  
   return 0;
}
