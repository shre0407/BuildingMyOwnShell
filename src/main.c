#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
  for (;;) {
    // Flush after every printf
    setbuf(stdout, NULL);
    printf("$ ");
    // Wait for user input
    char input[100];
    fgets(input, 100, stdin);
    input[strlen(input) - 1] = '\0';
    if (strcmp(input, "exit 0") == 0)
      break;
    printf("%s: command not found\n", input);
  }
  return 0;
}