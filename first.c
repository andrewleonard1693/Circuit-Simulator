#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define BUFFER_SIZE 256

typedef struct _Node{
	char letter;
	int value;
	struct _Node *next;
}node;

node* createNodeList(int numberOfNodes);
node* createNodeList(int numberOfNodes)
{
	node *head = (node*)malloc(1*sizeof(node));
	node *ptr = head;
	int i = 1;
	while(i<numberOfNodes){
		ptr->next = (node*)malloc(1*sizeof(node));
		ptr=ptr->next;
		++i;
	}
	return head;

}

int main(int argc, char const *argv[])
{
	/*Check number of parameters*/
	// if(argc!=3)
	// {
	// 	puts("Incorrect number of arguments");
	// 	return 0;
	// }

	/*Grab both files passed into the command line*/
	int circuitDescriptionFileLength = strlen(argv[1]);
	char *cDFile = (char*)calloc(circuitDescriptionFileLength,sizeof(char));
	strcpy(cDFile,argv[1]);

	int inputValuesFileLength = strlen(argv[2]);
	char *iVFL = (char*)calloc(inputValuesFileLength,sizeof(char));
	strcpy(iVFL,argv[2]);

	const char *delimiter_characters = " ";
    FILE *cFile = fopen(cDFile, "r");
    // FILE *valFile = fopen(iVFL,"r");

    char buffer[ BUFFER_SIZE ];
    // char buffer2[ BUFFER_SIZE ];
    // char *last_token;
    int numValues=0;
    node *head = NULL;
    // int i = 0;

    //Loop through the values file
    //while there is a valid token
    	//create a node with the integer value of that token
    //after the linked list structure is created go through the 
        // Read each line into the buffer
        while(fgets(buffer, BUFFER_SIZE, cFile) != NULL )
        {

            // Write the line to stdout
            // fputs( buffer, stdout );
            if(strcmp(strtok(buffer,delimiter_characters),"INPUTVAR")==0)
            {
            	numValues =atoi(strtok(NULL, " ")); 
            	puts("inputvar");
            	head = createNodeList(numValues);
            	printf("%d\n", numValues);
            }
            else if(strcmp(strtok(buffer,delimiter_characters),"OUTPUTVAR")==0)
            {
            	puts("outputvar");
            } 
            else if(strcmp(strtok(buffer,delimiter_characters),"AND")==0)
            {
            	puts("and");
            }
            else if(strcmp(strtok(buffer,delimiter_characters),"OR")==0)
            {
            	puts("or");
            }
            else if(strcmp(strtok(buffer,delimiter_characters),"MULTIPLEXER")==0)
            {
            	puts("multiplexer");
            }
            else if(strcmp(strtok(buffer,delimiter_characters),"DECODER")==0)
            {
            	puts("decoder");
            }

            // Gets each token as a string and prints it
            // last_token = strtok( buffer, delimiter_characters );
            // while( last_token != NULL ){
            //     // printf( "%s\n", last_token );
            //     if(atoi(last_token)>0)
            //     {
            //     	int num = atoi(last_token);
            //     	values=(int*)malloc(num*sizeof(int));

            //     }
            //     last_token = strtok( NULL, delimiter_characters );
            // }
            // while( fgets(buffer2, BUFFER_SIZE, valFile) != NULL )
            // {
            // 	last_token = strtok( buffer2, delimiter_characters );
           	// 	while( last_token != NULL )
           	// 	{
           	// 		values[i]=atoi(last_token);
           	// 		printf("%d\n",values[i]);
           	// 		++i;
            //     	last_token = strtok( NULL, delimiter_characters );
            // 	}
            	
            // }

        }

   


	return 0;
}
