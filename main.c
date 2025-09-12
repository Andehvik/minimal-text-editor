#include <stdio.h>
#include <errno.h>
#include <stdlib.h>



void read_from_file(){

  FILE * inn =  fopen("/home/anders/Dev/min_editor/new.txt", "w+");
  char buffer[5] = "Hello";
  if(errno != 0){

    perror("fopen");
    return exit(EXIT_FAILURE);
  }else{

    fwrite(buffer,sizeof(char),sizeof(buffer),inn);

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
