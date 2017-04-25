#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	/*Check number of parameters*/
	if(argc!=3)
	{
		puts("Incorrect number of arguments");
		return 0;
	}

	/*Grab both files passed into the command line*/
	int circuitDescriptionFileLength = strlen(argv[1]);
	char *cDFile = (char*)calloc(circuitDescriptionFileLength,sizeof(char));
	strcpy(cdFile,argv[1]);

	int inputValuesFileLength = strlen(argv[2]);
	char *iVFL = (char*)calloc(inputValuesFileLength,sizeof(char));
	strcpy(iVFL,argv[2]);

	// const char *delimiter_characters = " ";
 //    FILE *cFile = fopen( filename, "r");
 //    char buffer[ BUFFER_SIZE ];
 //    char *last_token;

 //    if( input_file == NULL ){

 //        fprintf( stderr, "Unable to open file %s\n", filename );

 //    }else{

 //        // Read each line into the buffer
 //        while( fgets(buffer, BUFFER_SIZE, input_file) != NULL ){

 //            // Write the line to stdout
 //            //fputs( buffer, stdout );

 //            // Gets each token as a string and prints it
 //            last_token = strtok( buffer, delimiter_characters );
 //            while( last_token != NULL ){
 //                printf( "%s\n", last_token );
 //                last_token = strtok( NULL, delimiter_characters );
 //            }

 //        }

 //        if( ferror(input_file) ){
 //            perror( "The following error occurred" );
 // //        }


	return 0;
}