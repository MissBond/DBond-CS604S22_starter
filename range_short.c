#include <stdio.h>
int main() {

    short min_short, max_short;

    //TODO: Please find the range of short type (meaning the smallest and largest values a short type variable can represent), and print out these values in decimals (store the smallest value in min_short and the largest value in max_short)
    //You are not allowed to hard-code any numbers in decimals
    //You are not allowed to use INT_MAX or INT_MIN
    //Please use binaries/hex values (such as 0b, 0x, etc)
    //No loop or if statement is allowed

    min_short = 0x8000;
    max_short = 0x7FFF;
    // printf("number of bytes in a short: %lu\n", sizeof(min_short));
    printf("%hi ", min_short);
    printf("%hu\n", max_short);
    return 0;
}
