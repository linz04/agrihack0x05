#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

//gcc pop.c -no-pie -fno-stack-protector -o pop


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
}

void linz(char *str){
  if(!strcmp(str, "linzhere")){
    system("cat flag.txt");
  }
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