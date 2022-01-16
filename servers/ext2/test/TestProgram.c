#include <stdio.h>
#include <lib.h> 
#include <sys/statfs.h>

int main(){

  int fd = open("test.txt");
  if (fd <= 0){
    printf("File open failed\n");
    return 0;
  }

  char x[1024];
  int i;
  for(i = 0; i < 1024; i++){
      x[i] = 'a';
  }
	printf("allocated extent with number of blocks: 12\n");

  for (i = 0; i < 10; i++){
      int size = write(fd, x, 1024);

      if (size < 1024)
      {
        printf("Write failed. Return code %d\n", size);
	return 0;
      }
      if (i == 50)
        //printf("test_normal_1\n");
      if(i == 60)
        //printf("\n");
      if(i == 64)
        //printf("\n");
      if(i == 65)
        printf("\n");
      if(i == 70)
        printf("\n");
      if(i == 75)
        printf("\n");
  }
printf("\n");

  printf( "\n");



return 0;
}

