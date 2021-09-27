#include <stdio.h>

/*A spinning tire makes 3000 revolutions per minutes. Calculate How many degrees it rotate in one second.
Then display the Degrees.*/
int main(){
    int var1, var2, quotient, var3;
    //var1 = 3000; RPM
    //var2 = 60; Seconds per minutes
    //var3 = 360; Degrees per Revolution
        printf("Enter the value of var1 ");
        scanf("%d", &var1);
        printf("Enter the value of var2 ");
        scanf("%d", &var2);
        printf("Enter the value of var3 ");
        scanf("%d", &var3);
        printf("\n%d / %d = %d is the quotient", var1, var2, var1/var2);
        printf("\nEnter the value of the quotient: ");
        scanf("%d", &quotient);
        printf("\n%d * %d = %d is the degrees per second\n", quotient, var3, quotient*var3);
    return 0;}
