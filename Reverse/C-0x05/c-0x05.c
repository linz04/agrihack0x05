#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void func(int *a, int *b){
    *a = *a - *b;
    *b = *b + *a;
    *a = *b - *a;
}

unsigned int generate_key(unsigned int *seed){
    *seed = *seed * 0x33333333 + 0x3333;
    return *seed;
}

int main(int argc, char const  *argv[])
{

    unsigned int seed = 1337;
    char namefile[102];
    FILE *file;

    unsigned int buf[10000];
    int len = 0, c;

    printf("nama file: ");
    scanf("%100s", namefile);

    file = fopen(namefile, "r");

    if(file == 0){
        printf("[!] error: tidak bisa membuka file bernama %s\n", namefile);
        exit(1);
    }

    printf("[*] Membaca file %s ...\n", namefile);

    while((c=getc(file)) != EOF && len < 10000-1){
        buf[len] = (unsigned int)c;
        len++;
    }
    buf[len] = '\x00';

    if(len == 10000-1){
        puts("[!] File terlalu besar!");
        exit(1);
    }

    printf("[+] Membaca file %s berhasil!\n", namefile);

    puts("[*] Melakukan perubahan ...");
    for(int i = 0; i < len; i++){

        buf[i] = (buf[i] ^ (generate_key(&seed) % 256));

        if(buf[i] % 2 == 0){
            buf[i] = buf[i] << 8;
        }
 
    }
    for(int i = 0; i < len-1; i += 2 )
        func(&buf[i], &buf[i+1]);
    puts("[+] Melakukan perubahan selesai!");

    FILE *enc = fopen(strcat(namefile, ".smile"), "w");

    printf("[*] Menulis ke file %s ...\n", namefile);
    for(int i = 0; i < len; i++){
        fprintf(enc, "%u ", buf[i]);
    }
    printf("[+] Menulis ke file %s berhasil!\n", namefile);
    return 0;
}
