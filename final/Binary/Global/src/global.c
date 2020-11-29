#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//gcc global.c -fno-stack-protector -o global
char flag[64];

void logo(){
  puts("██╗     ██╗███╗   ██╗███████╗");
  puts("██║     ██║████╗  ██║╚══███╔╝");
  puts("██║     ██║██╔██╗ ██║  ███╔╝ ");
  puts("██║     ██║██║╚██╗██║ ███╔╝  ");
  puts("███████╗██║██║ ╚████║███████╗");
  puts("╚══════╝╚═╝╚═╝  ╚═══╝╚══════╝");
}



void setup(){
  setvbuf(stdin,0,2,0);
  setvbuf(stdout,0,2,0);
  FILE *fp = fopen("flag.txt","r");
  if(fp == NULL){
    printf("No file flag.txt\n");
    exit(0);
  }
  fgets(flag,60,fp);
}

void linz_here(){
	printf("%s\n", flag);
}

int vuln(){
	setup();
	logo();
	char buff[32];
	puts("In This challenge PIE is ENABLE");
	puts("Dont worry it still solveable");
	printf("Input : ");
	read(0,buff,80);
}

int main(){
	vuln();
	return 0;
}
