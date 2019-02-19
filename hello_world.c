#include <stdio.h>

void main(int argc, char** argv)
{
  int i;

  printf("Hello world!\n");fflush(NULL);

  for(i=0;i<argc;i++)
  {
    printf("[%s]\n",argv[i]);
  }

  printf("Just spat out [%d] things.\n",argc);

}
