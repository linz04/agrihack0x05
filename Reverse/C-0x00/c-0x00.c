#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int arr[24] = {230, 230, 230, 144, 144, 144, 146, 146, 146, 204, 204, 204, 232, 232, 232, 146, 146, 146, 156, 156, 156, 206, 206, 206};

int main(int argc, char const *argv[])
{
	unsigned int i = 0;
	char buf[32];

	printf("input: ");

	scanf("%32s", buf);

	if(strlen(buf)!=24){
		puts("invalid length.");
		exit(0);
	}

	while(i < 24){
		if(((int)buf[i] << 1) != arr[i]){
			puts("nope.");
			exit(0);
		}
		i++;
	}
	printf("Congratz!\nHere is your flag: agrihack{%s}\n", buf);
	
	return 0;
}
