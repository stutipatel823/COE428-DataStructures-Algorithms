#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    if (argc == 2) {// If commond is invoked as "towers n"
        n = atoi(argv[1]);
	towers(n, from, dest);
	exit(0);
    }

    else if(argc == 4){//Debug if commond is invoked as " towers n from dest"
      //debugging for disks<=0 and if the user inputs towers<1 or towers>3.
      if(atoi(argv[1]) <= 0){printf("Cannot have less than 0 disks!");exit(0);}
      if(atoi(argv[2]) < 1 || atoi(argv[3]) < 1){printf("Cannot have less than 1 towers.");exit(0);}
      if(atoi(argv[3]) > 3 || atoi(argv[3]) > 3){printf("Cannot have more than 3 towers.");exit(0);} 
      
      else{
	n = atoi(argv[1]);
	from = atoi(argv[2]);
	dest = atoi(argv[3]);
	towers(n, from, dest);
	exit(0);
      }
    }
}

