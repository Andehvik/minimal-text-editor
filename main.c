#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


void read_from_file(){

  FILE * inn =  fopen("/home/anders/Dev/min_editor/new.txt", "r+");
  char buffer[50]; 


  if(errno != 0){

    perror("fopen");
    return exit(EXIT_FAILURE);
  }else{

    printf("\x1b[2J");
    printf("\x1b[H");
    printf("\x1b[2K");
    int c;
    while((c = fgetc(inn))!= EOF)
      putchar(c);

    if(ferror(inn))
      puts("I/O error when reading");
    else if(feof(inn))
    {
      puts("End of file is reached successfully");
    }

  fgets(buffer, sizeof(buffer), stdin);
    fwrite(buffer,sizeof(char),strlen(buffer),inn);


    printf("%d", strlen(buffer));
  fclose(inn);
  }

  
};

void input(){

  printf("Hello World! type something\n");
	char input [20];

	fgets(input, sizeof(input), stdin);
	if(errno != 0){
		perror("fgets");
	}
	printf("%s\n",input);

};
int main(void) { 
	errno = 0;
  read_from_file();

}
