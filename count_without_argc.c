#include <stdio.h>
#include <stdlib.h>
#define LEN 50
int main(void) {
  int ch;
  FILE *fp;
  char name[LEN];
  puts("Please enter a file name:");
  scanf("%49s",name);
  unsigned long count = 0;
  if ((fp = fopen(name, "r")) == NULL) {
    printf("Can't open %s\n", name);
    exit(EXIT_FAILURE);
  }
  while ((ch = getc(fp)) != EOF) {
    putc(ch, stdout);
    count++;
  }
  fclose(fp);
  printf("File %s has %lu characters\n", name, count);
  return 0;
}
