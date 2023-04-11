#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int menu(void){
    char input[5];
    int out;
    printf("Select input format or exit:\n");
    printf("(1.) Decimal\t(2.) Hex\t(3.) Binary\t(4.) Octal\t(5.) EXIT\n");
    fflush(stdout);
    fgets(input, 5, stdin);
    sscanf(input, "%i", &out);
    return out;
}

void intToBin(unsigned x){
    if (x > 1)
        intToBin(x / 2);
    printf("%d", x % 2);
}

void output1(void){
    char input[200];
    int in;
    printf("Input value:\n");
    fflush(stdout);
    fgets(input, 200, stdin);
    sscanf(input, "%i", &in);
    printf("\n(Decimal)->%i\n(Hex)->0x%X\n(Binary)->", in, in);
    intToBin(in);
    printf("\n(Octal)->%o\n\n", in);
}

void output2(void){
    char input[200];
    int in;
    printf("Input value:\n");
    fflush(stdout);
    fgets(input, 200, stdin);
    sscanf(input, "%X", &in);
    printf("\n(Decimal)->%i\n(Hex)->0x%X\n(Binary)->", in, in);
    intToBin(in);
    printf("\n(Octal)->%o\n\n", in);
}

void output3(void){
    char input[200];
    int in;
    printf("Input value:\n");
    fflush(stdout);
    fgets(input, 200, stdin);
    in = strtol(input, NULL, 2);
    printf("\n(Decimal)->%i\n(Hex)->0x%X\n(Binary)->", in, in);
    intToBin(in);
    printf("\n(Octal)->%o\n\n", in);
}

void output4(void){
    char input [200];
    int in;
    printf("Input value:\n");
    fflush(stdout);
    fgets(input, 200, stdin);
    sscanf(input, "%o", &in);
    printf("\n(Decimal)->%i\n(Hex)->0x%X\n(Binary)->", in, in);
    intToBin(in);
    printf("\n(Octal)->%o\n\n", in);
}

int main(void){
    for (;;){
        int y = menu();

        switch(y){
            case 1:
                output1();
                break;
            case 2:
                output2();
                break;
            case 3:
                output3();
                break;
            case 4:
                output4();
                break;
            case 5:
                goto Kill;
        }
    }
    Kill:
}
