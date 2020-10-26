#include <stdio.h>

int int main(int argc, char const *argv[])
{
    char s[40];
    printf("input: ");
    scanf("%32s", s);
    if(!strcmp(s, "31337")){
        printf("Congratz!\nHere is your flag: agrihack{welcome_to_baby_c_0x??_series}");
    }
    return 0;
}