#include <stdio.h>

void startup(){
    printf( "Michael Merabi CS222 \n");
    printf( "Performance Assessment \n");
    printf( "-----------------------\n");
    printf( "\n1) Enter parameters\n");
    printf( "2) Print Results \n");
    printf( "3) Quit \n\n");
    printf( "Enter Selection: ");
}

 int case1(int insClass, int machFreq, int c1CPI, int c1insCount, int c2CPI, int c2insCount, int c3CPI, int c3insCount) {

                printf( "\n\n Enter the number of instruction classes: ");
                scanf("%d", &insClass);

                printf( "\n\n Enter the frequency of the machine (MHz): ");
                scanf("%d", &machFreq);

                printf( "\n\n Enter CPI of class 1: ");
                scanf("%d", &c1CPI);

                printf( "\n Enter the instruction count of class 1 (millions): ");
                scanf("%d", &c1insCount);

                printf( "\n\n Enter CPI of class 2: ");
                scanf("%d", &c2CPI);

                printf( "\n Enter the instruction count of class 2 (millions): ");
                scanf("%d", &c2insCount);

                printf( "\n\n Enter CPI of class 3: ");
                scanf("%d", &c3CPI);

                printf( "\n Enter the instruction count of class 3 (millions): ");
                scanf("%d", &c3insCount);

                return insClass, machFreq, c1CPI, c1insCount, c2CPI, c2insCount, c3CPI, c3insCount ;
            }


int case2(){

}


int main(void) {
    int input, insClass, machFreq, c1CPI, c1insCount, c2CPI, c2insCount, c3CPI, c3insCount;

    startup(); //printout of selection menu

    while(input != 3){ // loop to ensure user can run unless program is exited
        scanf("%d", &input);
        
        if(input == 1){ //write parameters
            case1(insClass, machFreq, c1CPI, c1insCount, c2CPI, c2insCount, c3CPI, c3insCount);
            startup();
        }
        
        if (input == 2){ // calculate answers
            case2();
            startup();
        }

        if (input != 1 && input != 2){ // error catch
            printf( " Incorrect input, try again. \n");
            startup();    
        }
    }

    if(input == 3) { // quit
        printf( "\nProgram Terminated Normally");
        exit(0);
        //exit out
    }
 }   