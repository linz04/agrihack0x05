#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//gcc shell.c -fno-stack-protector -no-pie -z execstack -o shell


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
  char buffer[256];
  printf("Buffer: %p\n" , &buffer);
  puts("Can u get a full of control by hacking this program?");
  puts("No where to run");
  fgets(buffer,288,stdin);
  return 0;
}