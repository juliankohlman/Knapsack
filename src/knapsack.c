#include <stdio.h>

int main () 
{
  char *debugFile = "../data/small1.txt";
  printf("file is %s\n", debugFile);

  char buff[255];
  FILE *fp;
  fp = fopen(debugFile, "r");

  while (fgets(buff, 255, (FILE *)fp) != NULL) {
    printf("%s\n", buff);
  }

  fclose(fp);

  int debugSize = 100;
}