#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

//gcc fmt.c -no-pie -m32 -fno-stack-protector -o fmt

int target = 0x1337;

void logo(){
  puts("██╗     ██╗███╗   ██╗███████╗");
  puts("██║     ██║████╗  ██║╚══███╔╝");
  puts("██║     ██║██╔██╗ ██║  ███╔╝ ");
  puts("██║     ██║██║╚██╗██║ ███╔╝  ");
  puts("███████╗██║██║ ╚████║███████╗");
  puts("╚══════╝╚═╝╚═╝  ╚═══╝╚══════╝");
}

void setup()
{
  setvbuf(stdin, 0, 2, 0);
  setvbuf(stdout, 0, 2, 0);
}


int main(int argc, char **argv){

  setup();
  logo();
  char buffer[64];
  printf("Input: ");
  fgets(buffer, sizeof(buffer), stdin);
  printf(buffer);
  if(target == 0x7331){
    system("cat flag.txt");
  }
  else{
    printf("sorry target still %x\n",target);
  }
  return 0;
}