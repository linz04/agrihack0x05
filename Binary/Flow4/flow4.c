#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//gcc flow4.c -m32 -fno-stack-protector -no-pie -o flow4

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


int main(int argc, char **argv)
{
  setup();
  logo();
  char buffer[128];
  puts("Now u need to do something different");
  puts("No where to run");
  gets(buffer);
  return 0;
}