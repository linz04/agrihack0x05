#include <stdio.h>
#include <math.h>

int func(int x,int y){
    if ( x >= y)
        return 1 + func(x-y, y);
    else
        return 0;
}


int main(int argc, char const *argv[])
{
    int secret[] = {202037796, 157628025, 202037796, 170851041, 232928644, 108659776, 170851041, 202037796, 154355776, 180633600, 108659776, 256640400, 202037796, 180633600, 157628025, 202037796, 191241241};
    for(int i = 0; i < 17; i++){
        printf("%c", func((int)pow(secret[i], 0.5) ^ 1945, 0x7f));
    }
    return 0;
}