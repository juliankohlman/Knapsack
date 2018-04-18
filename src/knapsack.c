#include <stdio.h>
#include <string.h>

int main () 
{
  char *debugFile = "../data/small1.txt";
  printf("file is %s\n", debugFile);

  char buff[256];
  FILE *fp;
  fp = fopen(debugFile, "r");

  char * row;
  char * cost;
  char * val;

  while (fgets(buff, 256, (FILE *)fp) != NULL) {
    row = strtok(&buff[0], "");
    cost = strtok(&buff[2], "");
    val = strtok(&buff[5], "");
    printf("Row: %s Cost: %s Value: %s", row, cost, val);

    // sscanf(buff, "%255s", row);
  }

  fclose(fp);
  int debugSize = 100;
}