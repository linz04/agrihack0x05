#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//gcc global.c -no-pie -fno-stack-protector -o global

char *string="cat flag.txt";

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


int main(){
	char s[32];

	setup();

	do{
		logo();
		printf("Input [yes/no]: ");
		gets(s);
	}while(!strcmp(s, "yes"));

	return 0;
}
