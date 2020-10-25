#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int arr[20] = {238, 202, 216, 198, 222, 218, 202, 190, 232, 222, 190, 228, 202, 236, 202, 228, 230, 210, 220, 206};

int main(int argc, char const *argv[])
{
	unsigned int i = 0;
	char buf[32];

	printf("input: ");

	scanf("%32s", buf);

	if(strlen(buf)!=20){
		puts("invalid length.");
		exit(0);
	}

	while(i < 20){
		if(((int)buf[i]*2) != arr[i]){
			puts("nope.");
			exit(0);
		}
		i++;
	}
	printf("Congratz!\nHere is your flag: agrihack{%s}\n", buf);
	
	return 0;
}
