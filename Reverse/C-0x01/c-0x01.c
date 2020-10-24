#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arr1[11] = {110, 99, 95, 110, 108, 115, 115, 107, 119, 108, 107};
int arr2[11] = {105, 51, 97,  97, 121, 105,  95,  48,  97, 115,  49};

int main(int argc, char const *argv[])
{
	char buf[32];
	int i;
	printf("input: ");
	scanf("%32s", buf);

	if(strlen(buf) != 22){
		puts("invalid length.");
		exit(0);
	}

	for(i = 0; i < 22; i++){
		if(i%2 == 0){
			if((int)buf[i] != arr1[i/2]){
				puts("nope.");
				exit(0);
			}

		}
		else{
			if((int)buf[i] != arr2[i/2]){
				puts("nope.");
				exit(0);
			}
		}
	}
	printf("Congratz!\nHere is your flag: agrihack{%s}\n", buf);
	return 0;
}
