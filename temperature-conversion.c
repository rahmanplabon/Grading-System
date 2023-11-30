#include<stdio.h>
#include<math.h>
int main()
{
    char c;
    
    double cel, fer, kel, kel1, far1, cel2, kel2, cel3, far3;
    printf("Enter Temperature in Abbreviate(Block Letter)");
    printf("\n");
    printf("C for Celcius\nF for Farenheit\nK for Kelvein\n");
    printf("Format:");
    scanf("%c", &c);
    
 
    switch(c)
    {
        case 'C':
        printf("Enter Temperature in °Celcius:");
        scanf("%lf",&cel);
        kel1=cel+273.15;
        far1=cel*(9.0/5.0)+32;
        printf("In Kelvin: %0.2lfK\n", kel1);
        printf("In Farenheit: %0.2lf°F\n", far1);
        break;
        
        case 'F':
        printf("Enter Temperature in °Farenheit:");
        scanf("%lf", &fer);
        cel2=(fer-32)*(5.0/9.0);
        kel2=(fer-32)*(5.0/9.0)+273.15;
        printf("In Celcius: %0.2lf°C\n", cel2);
        printf("In Kelvin: %0.2lfK", kel2);
        break;
        
        case 'K':
        printf("Enter Temperature in Kelvin:");
        scanf("%lf", &kel);
        cel3=kel-273.15;
        far3=(kel-273.15)*(9.0/5.0)+32;
        printf("In Celcius: %0.2lf°C\n", cel3);
        printf("In Farenheit: %0.2lf°F\n", far3);
        break;
        
        default:
        printf("Wrong Input. Please Enter C, F & K(Block Letter)");
    }
}