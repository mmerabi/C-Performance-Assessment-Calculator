#include <stdio.h>

int main(void) {
    int input, CPI, TIME, MIPS, c1, c2, c3;

    printf( "Michael Merabi CS222 \n");
    printf( "Performance Assessment \n \n ");
    printf( "1) Enter parameters\n");
    printf( "2) Print Results \n");
    printf( "3) Quit \n\n");
    printf( "Enter Selection: ");

    scanf("%d", &input);

        switch (input){
            case 1:
                printf( "3) Quit \n\n");
                break;
            case 2:
                printf( "3) Quit \n\n");
                break;
            case 3:
                printf( "3) Quit \n\n");
                break;
            default:
                printf( "Bad input, quitting!\n" );
                break;
    }
    getchar();

}