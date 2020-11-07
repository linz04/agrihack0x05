#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void setup(){
    setvbuf(stdin, 0, _IONBF, 0);
    setvbuf(stdout, 0, _IONBF, 0);
}

int check1(char* substr, int n, int m) {

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + substr[i];
    }
    return (sum % m) == 0;

}

int check2(char* substr, int n, int m){

    for(int i = 0; i < n; i++){
        if((substr[i] ^ 34) != (65+i*m))
            return 0;
    }
    return 1;

}

int check4(int a, int b){

    if (a == 1)
        return 0;
    if (b * b > a)
        return 1;
    if (a % b == 0)
        return 0;
    else
        return check4(a, b+1);

}

int check3(char *substr, int n, int m){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + substr[i];
    }
    return check4(sum, 2);

}

void print_flag(){

    char flag[40];
    FILE *fp = fopen("flag.txt", "r");
    if(fp == NULL){
        puts("Error: flag.txt: No such file or directory");
        exit(1);
    }
    fscanf(fp, "%s", flag);
    printf("Congratz!\nHere is your flag: agrihack{%s}\n", flag);

}

int main(int argc, char const *argv[])
{
    char buf[40];
    setup();

    printf("input: ");
    scanf("%32s", buf);

    if(strlen(buf) != 16){
        puts("invalid length.");
        exit(1);
    }
    //ddcagZZZ^KKIcfeh

    //dd
    if(!check1(&buf[0], 2, 5)){
        puts("incorrect");
        exit(1);
    }

    //cag
    if(!check2(&buf[2], 3, 2)){
        puts("incorrect");
        exit(1);
    }

    //ZZZ^
    if(!check1(&buf[5], 4, 7)){
        puts("incorrect");
        exit(1);
    }

    //KKI
    if(!check3(&buf[9], 3, 2)){
        puts("incorrect");
        exit(1);
    }

    //cfeh
    if(!check2(&buf[12], 4, 3)){
        puts("incorrect");
        exit(1);
    }

    puts("correct!");
    print_flag();

    return 0;
}
