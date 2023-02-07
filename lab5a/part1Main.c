#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();
int main(int argc, char * argv[])
{
  int ch;
  while ((ch = getchar()) != EOF){
	  int prev_ch;
		if(ch == '>'||ch == '/'||ch == '<'){prev_ch = ch;} 
		else if(isalpha(ch)){
			if(prev_ch == '<'|| prev_ch == '>'){
				push(ch);
			}
			else{
				if(pop()!=ch){
					printf("Not Valid");
					exit(1);
				}
				else{
					printf("Valid");
					exit(1);
				}
			}
		}
	}
	if(isEmpty() > 0){
        printf("NOT Valid");
        exit(1);
    }
  exit(0);
}
