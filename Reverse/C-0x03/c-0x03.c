#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int func(int x,int y){
    if ( x >= y)
        return 1 + func(x-y, y);
    else
        return 0;
}

void print_flag(){
    int secret[] = {240375205, 187634345, 177237162, 108658789, 167442901, 154356837, 167442901, 108658789, 157626914, 180634789, 187634345, 194768981, 177237162, 187634345, 202038857, 252586722, 108658789, 108658789};
    printf("Congratz!\nHere is your flag: agrihack{");
    for(int i = 0; i < 18; i++){
        printf("%c", func((int)pow((secret[i]^1234) - 0x77, 0.5) ^ 1945, 0x7f));
    }
    printf("}\n");
}

int main(int argc, char const* argv[])
{
	int cond;
    unsigned long score=0;
    int num, ran;
	FILE* fp = fopen("/dev/urandom", "r");

	if(!fp){
		puts("please use linux.");
        exit(1);
	}

    puts("   +---------------------+");
    puts("   | Guess a number Game |");
    puts("   +---------------------+");
    puts("");
    sleep(1);
    puts(" - by CSI game dev studios - ");
    puts("");
    sleep(1);
    puts("[0%]   loading");
    sleep(1);
    puts("[33%]  loading.");
    sleep(1);
    puts("[67%]  loading..");
    sleep(1);
    puts("[100%] loading...\n");
    puts("*guess a number (1-20).");
    puts("*You can claim a flag if your score >= 133713371337 :)\n");
    sleep(1);
	puts("1. play");
    puts("2. view score");
	puts("3. claim a flag");
    puts("4. give up");

	while(1){
		printf(">> ");
		scanf("%d", &cond);

		if(cond == 1){
            printf("input number: ");
            scanf("%d", &num);
            ran = (fgetc(fp)%20)+1;
            if(num == ran){
                puts("correct!");
                score++;
            }
            else{
                puts("incorrect!");
                printf("the correct answer is %d\n", ran);
            }
		}
        else if(cond == 2){
            printf("your score: %ld\n", score);
        }
        else if(cond == 3){
            if(score >= 133713371337)
                print_flag();
            else
                puts("your score is not enough.");
        }
        else if(cond == 4){
            puts("n00b!");
            exit(0);
        }
	}

	return 0;
}
