#include<stdio.h>

int wait(int a, int b){
    sleep(1337);
    if (b==0) return b;
    return wait(a,b-1) + a;
}

int main(){
    puts("excuse me for 42994.83051927955 years, i'll be right back with the flag");
    putchar(wait( 7028 , 5789 ) ^ 40685125 );
    putchar(wait( 3458 , 3438 ) ^ 11888571 );
    putchar(wait( 6016 , 2034 ) ^ 12236658 );
    putchar(wait( 6150 , 3933 ) ^ 24187975 );
    putchar(wait( 2894 , 3912 ) ^ 11321240 );
    putchar(wait( 6209 , 2667 ) ^ 16559434 );
    putchar(wait( 6480 , 1723 ) ^ 11164947 );
    putchar(wait( 3725 , 2450 ) ^ 9126145 );
    putchar(wait( 5925 , 4899 ) ^ 29026676 );
    putchar(wait( 6684 , 4255 ) ^ 28440333 );
    putchar(wait( 1961 , 3744 ) ^ 7342029 );
    putchar(wait( 4775 , 4849 ) ^ 23154006 );
    putchar(wait( 2108 , 4659 ) ^ 9821075 );
    putchar(wait( 4574 , 4133 ) ^ 18904447 );
    putchar(wait( 2561 , 2774 ) ^ 7104184 );
    putchar(wait( 2733 , 6063 ) ^ 16570150 );
    putchar(wait( 6605 , 3401 ) ^ 22463530 );
    putchar(wait( 5233 , 2502 ) ^ 13092881 );
    putchar(wait( 6902 , 5406 ) ^ 37312189 );
    putchar(wait( 3915 , 3715 ) ^ 14544143 );
    putchar(wait( 2699 , 3760 ) ^ 10148350 );
    putchar(wait( 7129 , 5216 ) ^ 37184777 );
    putchar(wait( 6750 , 4092 ) ^ 27621094 );
    putchar(wait( 5726 , 7110 ) ^ 40711891 );
    putchar(wait( 3652 , 3168 ) ^ 11569631 );
    putchar(wait( 1493 , 2664 ) ^ 3977468 );
    putchar(wait( 2089 , 3247 ) ^ 6783087 );
    putchar(wait( 4061 , 2703 ) ^ 10976790 );
    putchar(wait( 3023 , 2726 ) ^ 8240741 );
    putchar(wait( 2508 , 3204 ) ^ 8035655 );
    putchar(wait( 2878 , 3045 ) ^ 8763415 );
    putchar(wait( 5473 , 6124 ) ^ 33516549 );
    putchar(wait( 4703 , 6548 ) ^ 30795160 );
    putchar(wait( 6680 , 2919 ) ^ 19498945 );
    putchar(wait( 3767 , 4583 ) ^ 17264207 );
    putchar(wait( 4124 , 3726 ) ^ 15366127 );
    putchar(wait( 5065 , 4760 ) ^ 24109319 );
    putchar(wait( 1581 , 1525 ) ^ 2411126 );
    putchar(wait( 7080 , 2657 ) ^ 18811593 );
    putchar(wait( 5846 , 4977 ) ^ 29095451 );
    putchar(wait( 6093 , 5248 ) ^ 31976165 );
    putchar(wait( 3294 , 1379 ) ^ 4542341 );
    putchar(wait( 1516 , 2880 ) ^ 4366199 );
    putchar(wait( 2088 , 6473 ) ^ 13515521 );
    putchar(wait( 4458 , 6744 ) ^ 30064644 );
    putchar(wait( 2551 , 4905 ) ^ 12512743 );
    putchar(wait( 6079 , 5734 ) ^ 34857077 );
    putchar(wait( 3854 , 1840 ) ^ 7091413 );
    putchar(wait( 4085 , 4716 ) ^ 19264808 );
    putchar(wait( 4471 , 5593 ) ^ 25006208 );
    putchar(wait( 6480 , 3216 ) ^ 20839799 );
    putchar(wait( 2661 , 2352 ) ^ 6258577 );
    putchar(wait( 1424 , 5894 ) ^ 8392969 );
    putchar(wait( 2226 , 5088 ) ^ 11325876 );
    putchar(wait( 1463 , 5574 ) ^ 8154851 );
    putchar(wait( 3099 , 3921 ) ^ 12151269 );
    putchar(wait( 3828 , 2237 ) ^ 8563267 );
    putchar(wait( 4061 , 3321 ) ^ 13486472 );
    return 0;
}