#include <stdlib.h>

void strCopy(char* from, char* destination, char delim)
{
  char* fromPointer, *toPointer;
  fromPointer = from;
  toPointer = destination;
  while((*fromPointer != delim) && (*fromPointer != '\0'))
    {
      *toPointer = *fromPointer;
      toPointer++;
      fromPointer++;
    }
  *toPointer = '\0';
  return;
}

int tokenlen(char* tokenBegin, char delim)
{
  char* strPointer;
  int counter;
  for(strPointer = tokenBegin; (*strPointer != delim) && (*strPointer != '\0'); strPointer++);
  counter = strPointer - tokenBegin + 1;
  return counter;
}

int tokenCount(char* str, char delim)
{
  int counter = 0;
  int tokenBool = 0;
  char* strPointer;
  for(strPointer = str; *strPointer != '\0'; strPointer++)
    {
      if(*strPointer == delim)
	{
	  if(tokenBool)
	    {
	      tokenBool = 0;
	    }
	}
      else
	{
	  if(!tokenBool)
	    {
	      tokenBool = 1;
	      counter++;
	    }
	}
    }
  return counter;
}

char** mytoc(char* str, char delim)
{
  char* strPointer, *currentTokenBegin;
  int numTokens = tokenCount(str,delim);
  numTokens++;
  int tokenBool = 0, currentTokenLen = 0, currTok  = 0;
  char** tokenVec = calloc(numTokens,sizeof(char*));
  tokenVec[numTokens-1] = (char *)0;
  for(strPointer = str; *strPointer != '\0'; strPointer++)
    {
      if(*strPointer == delim)
	{
	  if(tokenBool)
	    {
	      tokenBool = 0;
	    }
	}
      else
	{
	  if(!tokenBool)
	    {
	      tokenBool = 1;
	      currentTokenBegin = strPointer;
	      currentTokenLen = tokenlen(currentTokenBegin,delim);
	      tokenVec[currTok] = (char*)malloc(currentTokenLen*sizeof(char));
	      strCopy(currentTokenBegin,tokenVec[currTok],delim);
	      currTok++;
	    }
	}
    }
  return tokenVec;
}
