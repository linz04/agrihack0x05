#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char s[40];

    printf("input: ");
    scanf("%32s", s);
    if(strlen(s) != 16){
        puts("invalid length.");
        exit(0);
    }

    if(s[6] != '_'){
        puts("nope.");
        exit(0);   
    }


    if(s[9] != 'f'){
        puts("nope.");
        exit(0);   
    }

    if(s[8] != s[6] || s[13] != s[6]){
        puts("nope.");
        exit(0);   
    }

    if(s[10] != 'i'){
        puts("nope.");
        exit(0);   
    }

    if(s[11] != 'n'){
        puts("nope.");
        exit(0);   
    }

    if(s[12] != 'd'){
        puts("nope.");
        exit(0);   
    }

    if(s[14] != 'm'){
        puts("nope.");
        exit(0);   
    }

    if(s[15] != 'e'){
        puts("nope.");
        exit(0);   
    }

    if(s[1] != 'h'){
        puts("nope.");
        exit(0);       
    }

    if(s[7] != 'u'){
        puts("nope.");
        exit(0);   
    }

    if(s[4] != 'a'){
        puts("nope.");
        exit(0);   
    }

    if(s[3] != s[4] || s[5] != s[4]){
        puts("nope.");
        exit(0);   
    }

    if(s[0] != 'w'){
        puts("nope.");
        exit(0);   
    }

    if(s[2] != 'o'){
        puts("nope.");
        exit(0);   
    }

    puts("Congratz!\nHere is your flag: agrihack{whoaaa_u_find_me}");

    return 0;
}