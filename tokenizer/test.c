#include "mytoc.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char* input;

void printTokenVector(char** vector)
{
  char** iteratorTok;
  char* str;
  for(iteratorTok = vector; *iteratorTok; iteratorTok++)
    {
      str = *iteratorTok;
      printf(str);
      printf("\n");
    }
}

int strEq(char* str1, char* str2)
{
  char* iterator;
  char* iterator2 = str2;
  for(iterator = str1; *iterator != '\0'; iterator++)
    {
      if(*iterator == *iterator2){
	iterator2++;
      }
      else{
	return 0;
      }
    }
  return 1;
}

int main()
{
  char input[320];
  printf("Starting test\n");
  printTokenVector(mytoc("Hello my dog's name is Darwin.",' '));
  printTokenVector(mytoc("     Hello   World!    ",' '));
  printTokenVector(mytoc("",' '));
  printTokenVector(mytoc("          ",' '));
  printTokenVector(mytoc(" HelloWorld",' '));
  printf("Test end\n");
  Printf("Comencing user loop\n"
  printf("Maximum input size is 320 character\n");
  printf("Input exit to stop\n$ ");
  scanf("%320s",&input);
  while (!strEq("exit", input))
    {
      printTokenVector(mytoc(input, ' '));
      scanf("%320s",&input);
  }
}
