#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();
int main(int argc, char * argv[])
{
      int ch;
      int tally[26][2];
        int i =0;
        for(int c = 'a'; c<='z';c++){
                tally[i][0]=c; 
                tally[i][1]=0;
                i++;
        }
      
      while ((ch = getchar()) != EOF){
          int prev_ch;
            if(ch == '>'||ch == '/'||ch == '<'){prev_ch = ch;} 
            else if(isalpha(ch)){
                if(prev_ch == '<'){
                    push(ch);
                    for(int i=0; i<26;i++){
                        if(tally[i][0]==ch){tally[i][1]++;}
                    }
                }
                else{
                    if(pop()!=ch){
                        printf("Not Valid");
                        exit(1);
                    }
                    else{
                        printf("Valid\n");
                        for(int i=0; i<26;i++){
                            if(tally[i][1]!=0){
                                printf("%c: %d\n",tally[i][0],tally[i][1]);
                            }
                        }
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
