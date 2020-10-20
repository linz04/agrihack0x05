#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//gcc flow2.c -m32 -fno-stack-protector -no-pie -o flow2

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
	volatile int modified;
	char buffer[64];

	modified = 0;
	puts("Now its a bit harder");
	gets(buffer);

	if(modified == 0x04170417) {
		system("cat flag.txt");
	} else {
		printf("Try again?\n");
	}
}