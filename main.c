#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


void read_from_file(){

  FILE * inn =  fopen("/home/anders/Dev/min_editor/new.txt", "w+");
  char buffer[50]; 

  fgets(buffer, sizeof(buffer), stdin);

  if(errno != 0){

    perror("fopen");
    return exit(EXIT_FAILURE);
  }else{

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
