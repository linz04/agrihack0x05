#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void setup(){
    setvbuf(stdin, 0, _IONBF, 0);
    setvbuf(stdout, 0, _IONBF, 0);
}

int arr[23] = {54, 55, 60, 35, 9, 22, 22, 243, 222, 235, 240, 219, 240, 244, 216, 248, 232, 191, 190, 251, 189, 252, 235};

int main(int argc, char const *argv[])
{
    char s[40];
    int key, check;

    setup();

    printf("password: ");
    scanf("%32s", s);
    printf("key: ");
    scanf("%d", &key);

    if(strlen(s) != 23){
        puts("wrong password!");
        exit(0);
    }

    if(s[0] * key != 9559 || s[0] > key){
        puts("wrong password!");
        exit(0);
    }

    for(int i = 0; i < 23; i++){
        check = s[i] ^ key;
        key += 1;

        if(check != arr[i]){
            puts("wrong password!");
            exit(0);
        }
    }

    printf("Welcome!\n\n\n");
    sleep(1);
    system("/bin/G64180024sh");

    return 0;
}
