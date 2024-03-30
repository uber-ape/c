#include <stdio.h> /* library?*/

int main() /*this int means that itll return a integer at the end*/
{
    int feet, inch;
    double cm;
    
    printf("Enter FEET: ");
    scanf("%d",&feet);
    printf("Enter INCH: ");
    scanf("%d",&inch);
    
    cm = ((feet*12)+inch)*2.54; //anotation too? cool!
    
    printf ("%lf", cm);
    return 0;
}
