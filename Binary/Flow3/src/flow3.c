#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//gcc flow3.c -fno-stack-protector -no-pie -o flow3


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


int main(int argc, char **argv)
{
  setup();
  logo();
  char buffer[64];
  puts("Now u need to do something different");
  gets(buffer);
  return 0;
}


int linz_here(){
  printf("%s\n", flag);
}