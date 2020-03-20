#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char hej[25];
    int hossz;
    gets(hej);
    hossz=strlen(hej);
    for(int i=0;i<hossz;i++){
        if(hej[i]=='a' or hej[i]=='e' or hej[i]=='i' or hej[i]=='u' or hej[i]=='o'){
            hej[i] = hej[i] +('A'-'a');
        }
    }
    puts(hej);
    return 0;
}
