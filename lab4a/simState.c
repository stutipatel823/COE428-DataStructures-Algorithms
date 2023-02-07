#include <stdlib.h>
#include <stdio.h>
/* 
A F C
B G E
C D C
D B H
E C G
F E A
G H F
H A B
 
The starting state is D */
typedef struct state_Machine{
    char name;
	int number;
	struct state_Machine * zero;
	struct state_Machine * first;
} fsm;

fsm s[8];

void initialize(){
     //State A
     s[0].name = 'A';
	 s[0].number = 0;
	 s[0].zero = s+5; //State F
	 s[0].first = s+2; //State C
	 
	 //State B
	 s[1].name = 'B';
	 s[1].number = 1;
	 s[1].zero = s + 6; //State G
	 s[1].first = s + 4; //State E
	 
	 //State C
	 s[2].name = 'C';
	 s[2].number = 2;
	 s[2].zero = s + 3; //State D
	 s[2].first = s + 2; //State C
	 
	 //State D
	 s[3].name = 'D';
	 s[3].number = 3;
	 s[3].zero = s + 1; //State B
	 s[3].first = s + 7; //State H
	 
	 //State E
	 s[4].name = 'E';
	 s[4].number = 4;
	 s[4].zero = s + 2; //State C
	 s[4].first = s + 6; //State G
 
     //State F
	 s[5].name = 'F';
	 s[5].number = 5;
	 s[5].zero = s + 4; //State E
	 s[5].first = s + 0; //State A
	 
	 //State G
	 s[6].name = 'G';
	 s[6].number = 6;
	 s[6].zero = s + 7; //State H
	 s[6].first = s + 5; //State F
	 
	 //State H
	 s[7].name = 'H';
	 s[7].number = 7;
	 s[7].zero = s + 0; //State A
	 s[7].first = s + 1; //State B	 
}
void print(){
       int i=0;
          for(i =0; i <8; i++){
			fprintf(stdout, "%c %c %c\n", s[i].name, s[i].zero->name, s[i].first->name);
		  }
}
int main(int argc, char * argv[])
{
  int i=0;
  char input[3]; 
  initialize();
  fsm current = s[3]; //Starting State of FSM which is D

  
  fprintf(stdout, "Starting State: %c \n", current.name);
  
  
  while(i==0){

	 printf(stdout, "Enter your commands... \n");
     scan("%s",input);
     switch(input[0]){
		case 'p':
			print();
			break;
		case '0':
			fprintf(stdout, "%c\n",current.zero->name);
			current = s[current.zero->number];
			break;
		case '1':
			fprintf(stdout, "%c\n",current.zero->name);
			current = s[current.first->number];
			break;
		case 'q':
			i=1;
			break;
	 }
	 //The change for zero
	if(input[0] == 'c'){
	  if(input[2] == '0'){
	       if(input[4] == 'A'){
		   current.zero = s;
		   s[current.number].zero = s;
           }	
           else if(input[4] == 'B'){
		   current.zero = s+1;
		   s[current.number].zero = s+1;
           }
           else if(input[4] == 'C'){
		   current.zero = s+2;
		   s[current.number].zero = s+2;
           }
           else if(input[4] == 'D'){
		   current.zero = s+3;
		   s[current.number].zero = s+3;
           }
           else if(input[4] == 'E'){
		   current.zero = s+4;
		   s[current.number].zero = s+4;
           }
           else if(input[4] == 'F'){
		   current.zero = s+5;
		   s[current.number].zero = s+5;
           }
           else if(input[4] == 'G'){
		   current.zero = s+6;
		   s[current.number].zero = s+6;
           }	
           else if(input[4] == 'H'){
		   current.zero = s+7;
		   s[current.number].zero = s+7;
           }		   
	  }  
	}
	//The change for one
	if(input[0] == 'c'){
	  if(input[2] == '1'){
	       if(input[4] == 'A'){
		   current.first = s;
		   s[current.number].first = s;
           }	
           else if(input[4] == 'B'){
		   current.first = s+1;
		   s[current.number].first = s+1;
           }
           else if(input[4] == 'C'){
		   current.first = s+2;
		   s[current.number].first = s+2;
           }
           else if(input[4] == 'D'){
		   current.first = s+3;
		   s[current.number].first = s+3;
           }
           else if(input[4] == 'E'){
		   current.first = s+4;
		   s[current.number].first = s+4;
           }
           else if(input[4] == 'F'){
		   current.first = s+5;
		   s[current.number].first = s+5;
           }
           else if(input[4] == 'G'){
		   current.first = s+6;
		   s[current.number].first = s+6;
           }	
           else if(input[4] == 'H'){
		   current.first = s+7;
		   s[current.number].first = s+7;
           }		   
	  }  
	
    
	}
	exit(0);
}







