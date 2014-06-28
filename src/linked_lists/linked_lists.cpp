#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
    /* 
      extracting the arguments from a main function.
      remember that the argv[0] contains the name of executable.
    */
    
    printf(" Number of arguments = %d \n",argc);
    for( int i = 0; i < argc; i++) {
      printf("Argument %d : %s \n",i, argv[i]);
    }
    
    
    printf("hello world \n");
    //int c = getch();

}
