#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define HASH_TABLE_SIZE 10000000
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];
void add(char* tag)
{
	
	for(int i=0; i<HASH_TABLE_SIZE;i++){
		if(hash_table[i].string==tag){
			hash_table[i].count++;
		}
		else{
			int n=2;
			int key=1;
			for(int i=0; i<strlen(tag);i++){
				key = n*key+tag[i];
			}
			hash_table[key].string = tag;
			hash_table[key].count++;
			break;
		}
	}
}
void display(){
	printf("String\tCount\tKey\n");
	for(int i=0; i<HASH_TABLE_SIZE;i++){
		if(hash_table[i].count>0){
			printf("%s\t%d\t%d",hash_table[i].string, hash_table[i].count, i);
		}
	}
}
