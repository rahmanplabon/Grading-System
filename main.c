//Author: Plabon Rahman
//Github: https://github.com/rahmanplabon
//Last Modified: 27/11/2023; 20:52
//Code Purpose: Check Student Result via Grade
#include<stdio.h>
int main()
{
    int n,i, x=1, vari;
    double res, sum, avg, main_sum, num;
    printf("'A+'=5.00; 'A'=4.00; 'A-'=3.50; 'B'=3.00; 'C'=2.00; 'D'=1.00\n");
    printf("Enter Number of Subjects:");
    scanf("%d", &n);
    printf("Enter Optional Subject Grade:");
    scanf("%lf", &num);
    if(num>=5.00)
    vari = 3;
    
    else if(num>=4.00)
    vari = 2;
    
   else if(num>=3.50)
    vari = 1;
    
    for(i=1; i<=n; i++)
    {
        printf("Subject No %d:", x++);
        scanf("%lf", &res);
        sum+=res;
        main_sum=sum+vari;
        avg=main_sum/n;
    }
    printf("Total Grade: %0.2lf\n", main_sum);
    printf("Average:%0.2lf\n", avg);
    
    if(avg>=5.00)
    printf("Grade: 'A+' (Congratulations  🎉)\n");
    
    else if(avg>=4.00)
    printf("Grade: 'A' (Congratulations  🎉)\n");
    
    else if(avg>=3.50)
    printf("Grade: 'A-' (Congratulations  🎉)\n");
    
    else if(avg>=3.00)
    printf("Grade: 'B' (Congratulations  🎉)\n");
    
    else if(avg>=2.00)
    printf("Grade: 'C' (Congratulations  🎉)\n");
    
    else if(avg>=1.00)
    printf("Grade: 'D' (Congratulations  🎉)");
    return 0;
    
}