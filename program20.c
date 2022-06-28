#include <stdio.h>
#include <stdlib.h>

#define FILENAME "counter.txt"

int main( void )
{
    FILE *fp;
    int counter;

    fp = fopen( FILENAME, "r" );
    if ( fp == NULL )
    {
        counter = 1;
    }
    else
    {

        if ( fscanf( fp, "%d", &counter ) != 1 )
        {
            counter = 1;
        }
        else
        {
            counter += 1;
        }

        fclose( fp );
    }

    if(counter==11){
			if(remove("counter.txt")==0){
					printf("file deleted");	
			}			
	}
	else{
		fp = fopen( FILENAME, "w" );
    	if ( fp == NULL )
   	 	{
        fprintf( stderr, "Error opening file!\n" );
        exit( EXIT_FAILURE );
    	}
		fprintf( fp, "%d\n", counter );
    	printf("counter updated");	
	}
  
    fclose( fp );
}





