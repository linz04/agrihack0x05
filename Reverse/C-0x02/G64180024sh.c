#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>


void setup(){
    setvbuf(stdin, 0, _IONBF, 0);
    setvbuf(stdout, 0, _IONBF, 0);
}

// fungsi split string
void split(char *str, char *arg[10]){


    char *p = strtok(str, " ");
    int i = 0;
    while(p != NULL){
        arg[i++] = p;
        p = strtok(NULL, " ");
    }
    arg[i] = NULL;
}


int main(int argc, char const *argv[])
{
    // deklarasi variable pid dengan tipe data pid_t
    pid_t pid;

    setup();

    puts("- G64180024 Shell -\n");

    // melakukan infinity loop
    while(1){

        // deklarasi variable array yang berisi pointer string dengan ukuran 10
        char *arg[10];
        // deklarasri variable command bertipe data string sepanjang 64 karakter
        char command[64];

        printf(">> ");

        // melakukan input kepada variable command
        fgets(command, 64, stdin);

        // karena fgets mengambil newline, maka newline tersebut diganti dengan null
        if(command[strlen(command) - 1] == '\n')
            command[strlen(command) - 1] = '\x00';

        // melakukan split string berdasarkan spasi
        split(command, arg);

	if(!strcmp(arg[0], "exit"))
	    break;
	else if(!strcmp(arg[0], "cd")){
	    chdir(arg[1]);
	    continue;
	}

        // membuat proses child
        pid = fork();

        // pengecekan apabila fork gagal
        if(pid < 0){
            printf("fork error.\n");
            exit(0);
        }
        // jika saat ini adalah proses child
        else if(pid == 0){

            // menjalankan command dengan argumennya
            execvp(arg[0], arg);
	    perror(arg[0]);

            // jika command tidak ada, exit proses child
            exit(1);
        }
        // jika saat ini adalah proses parrent
        else{

            // menunggu proses child berhenti
            wait(NULL);
        }
    }

    return 0;
}
