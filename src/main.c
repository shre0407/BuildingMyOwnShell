#include <stdio.h>
#include <string.h>

int main() {
  // Flush after every printf
  setbuf(stdout, NULL);

  // Uncomment this block to pass the first stage
  printf("$ ");

  // Wait for user input
  while(1){
    printf("$ ");

    char input[100];
    if(fgets(input, sizeof(input), stdin)==NULL) {
      break;

    }
  
    *strchr(input, '\n') = '\0';
    printf("%s: command not found\n", input);
  }
  
  return 0;
}
