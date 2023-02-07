#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
extern char *  pop();
extern void push(char *);
extern void add(char *);
extern void display();

int main(int argc, char * argv[])
{
  int ch;
  int sumForward=0;
  int sumReverse=0;
  char append[] = "";
  char* word;
  
  while ((ch = getchar()) != EOF){
      int prev_ch;
      char* letter = "";
        if(ch == '<'||ch == '/'||ch == '>'){
            if(ch == '>'){
                word = append;
                add(word);
            }
            else{prev_ch = ch;}
        } 
        else if(isalpha(ch)){
            if(prev_ch == '<'){
                letter = itoa(ch,letter, 1);//convert ch from int to char
                push(letter);//pushing the char form of ch
                
                sumForward += (int)ch;//Finding the total when all ASCII code for all letters are added forward
                strncat(word,letter,1);//appending variable "word", everytime an alphabet "ch" is pushed.
            }
            else{
                sumReverse += (int)pop();//Finding the total when all ASCII code for all letters are added reverse(pop means going backwards).
            }
        }
    }
    if(sumForward == sumReverse){//Checking if the tag is valid by comparing if total of ASCII codes for both forward and reverse equal the same.
        printf("Valid\n");
        display();
    }
    else{printf("Not Valid");}
     if(isEmpty() > 0){
        printf("NOT Valid");
        exit(1);
    }
  exit(0);
}
