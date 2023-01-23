//Justin Vasquez and Anthony Yannella
#include "tools.h"
int main(void){
    banner(); //This runs the banner function.
    char alphbet[26];//array set
    int keys=0, counterA=97, counterB=96;//for loop and array container
    for(keys=0; keys<26; keys++){// the loop
      printf("Enter keyboard letters: ");//output
      scanf(" %c", &alphbet[keys]);//input to store letters to array 
      if(alphbet[keys] == '#') break;// invalid character
      if(tolower(alphbet[keys]) > counterA++){
        keys=-1;
        counterB=96;
        counterA=97;}
      else if(tolower(alphbet[keys]) <= counterB++){
        keys=-1;
        counterB=96;
        counterA=97;}
    }
    if(alphbet[keys] == '#'){// for invalid characters
      puts("\033[0;31m");//changes color
      puts("Connection Terminated");//output
      return 0;
    }//ends 
    for(keys=0; keys<26; keys++){//ending loop
      printf("%c ", tolower(alphbet[keys]));// outputs all stored chars
  }
    bye();// If code was done correctly
	  return 0;
}//true end 
/*----------------------------------------------------
    Program 1: Letter List 
    Anthony and Justin 
    CSCI 2212 
    Thu Feb 10 2022  17:41:42
----------------------------------------------------*/
