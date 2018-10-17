#include <stdio.h>
#include <stdlib.h>
    
    int *CPIcount ;
    int *insCount;
    int MHz;
    int insClass2;

void startup(){
    printf( "\nMichael Merabi CS222 \n");
    printf( "Performance Assessment: \n");
    printf( "-----------------------\n");
    printf( "\n1) Enter parameters\n");
    printf( "2) Print Results \n");
    printf( "3) Quit \n\n");
    printf( "Enter Selection: ");
}

 void case1() {
            int cpiCt;
            int insCt;
            int numcount;
            int i = 0;

            scanf("%d", &insClass2);
            printf( "\n\n Enter the number of instruction classes: ""%d",insClass2);

            scanf("%d", &MHz);
            printf( "\n\n Enter the frequency of the machine (MHz): ""%d",MHz);



            CPIcount = (int *)malloc(insClass2 * sizeof(int));
            insCount = (int *)malloc(insClass2 * sizeof(int));


             while ( i < insClass2) {
                numcount = i+1;

                printf( "\n\n Enter CPI of class %d: ", numcount);
                scanf("%d", &cpiCt);
                printf("\t%d",cpiCt);
                CPIcount[i] = cpiCt;

                printf( "\n Enter the instruction count of class %d (millions): ", numcount);
                scanf("%d", &insCt);
                printf("\t%d",insCt);
                insCount[i] = insCt;
                i++;    
                }
        }


void case2() {

    int numcount;
    float avgcpi;
    float avgtime;
    float avgmips;
    int i = 0;

    //calculation variables
    float num = 0;
    float den = 0;
    float time = 0;

    printf( "FREQUENCY (MHz): %d \n\n" , MHz);
    printf( "INSTRUCTION DISTRIBUTION \n\n");
    printf( "CLASS \t CPI \t COUNT \n");

    
    while (i < insClass2 ) {
        numcount = i + 1;

        num += CPIcount[i]*insCount[i];
        den += insCount[i];
        time += insCount[i];

        printf( "%d \t", numcount);
        printf( "%d \t", CPIcount[i]);
        printf( "%d \n", insCount[i]);
        i++;
    }

    float megah = (float)MHz;

    avgcpi = num/den;
    avgtime = avgcpi*time*(1/megah)*1000;
    avgmips = (megah*(10^6))/(avgcpi*(10^6));

    printf("\n\nPERFORMANCE VALUES\n\n");

    printf("AVERAGE CPI\t");
    printf("%.2f \n",avgcpi);
    printf("TIME (ms)\t");
    printf("%.2f \n",avgtime);
    printf("MIPS \t\t");
    printf("%.2f \n \n",avgmips);
    }


int main(void) {
    int input;

    startup(); //printout of selection menu

    while(input != 3){ // loop to ensure user can run unless program is exited
        scanf("%d", &input);
        
        if(input == 1){ //write parameters
            case1();
            startup();
        }
        
        if (input == 2){ // calculate answers
            case2();
            startup();
        }
    }

    if(input == 3) { // quit
        printf( "\nProgram Terminated Normally");
        exit(0);
        //exit out
    }
 }
