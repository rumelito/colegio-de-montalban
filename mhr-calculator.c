// MONITORING HEART RATE
// MONTALBO, ROMMEL M. - BSIT 1F

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

char rhr[500];
float age, mhr, thr;
int num, mod1,mod2, vig1, vig2;

int main()
{
    system("cls");

    p("|------------- MONITORING HEART RATE -------------|\n");

    p("\nEnter your Resting heart rate: ");
    s("%s", &rhr);
    p("\nEnter your AGE: ");
    s("%f", &age);

    mhr = (220-age);

    p("\nYour Maximun Heart Rate is %.02f\n", mhr);

    p("\n   Press 1 to find moderate intensity.\n");
    p("   Press 2 to find vigorous intensity.\n");

    p("\nEnter the number: ");
    s("%d", &num);

    mod1 = (mhr * .64);
    mod2 = (mhr * .76);
    if(num==1)
    {
         system("cls");
    p("Resting Heart Rate: %s \n", rhr);
    p("AGE: %.0f \n", age);
    p("Maximun Heart Rate: %.0f \n", mhr);
    p("Moderate Intensity: %d - %d bpm \n", mod1, mod2);
    }

    vig1 = (mhr * .77);
    vig2 = (mhr * .93);

    if(num==2)
    {
        system("cls");
    p("Resting Heart Rate: %s \n", rhr);
    p("AGE: %.02f \n", age);
    p("Maximun Heart Rate: %.0f \n", mhr);
    p("Vigorous Intensity: %d - %d bpm \n", vig1, vig2);
    }

    return 0;
}
