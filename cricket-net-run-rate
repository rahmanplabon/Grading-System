#include<stdio.h>
int main()
{
    float m1r_t, m2r_t, m1o_t, m2o_t, m1r_g, m2r_g, m1o_g, m2o_g, tr1, to1, nrr1, tr2, to2, nrr2, nrr;
    char team[1000];
    /*  m1r_t= 1st Match Runs Taken
        m2r_t= 2nd Match Runs Taken
        m1o_t= 1st Match Over Taken
        m2o_t= 2nd Match Over Taken

        m1r_g= 1st Match Runs Given
        2mr_g= 2nd Match Runs Given
        m1o_g= 1st Match Over Given
        2mo_g= 2nd Match Over Given
    */
    printf("Enter Your Team Name: ");
    scanf("%s", team);

    printf("\n");   //print new line

    printf("Runs Taken By %s \n", team);

    printf("1st Match Runs Taken By %s: ", team);
    scanf("%f", &m1r_t);

    printf("1st Match Overs Consumed By %s(If all out then 50): ", team);
    scanf("%f", &m1o_t);

    printf("2nd Match Runs Taken By %s: ", team);
    scanf("%f", &m2r_t);


    printf("2nd Match Overs Consumed By %s(If all out then 50): ", team);
    scanf("%f", &m2o_t);

    printf("\n");  //print new line

    tr1 = m1r_t + m2r_t;  //Total Runs Taken By Country
    to1 = m1o_t + m2o_t; // Total Runs Taken By Country

    nrr1 = tr1 / to1;  //1st Net Run Rate



    printf("Runs Given By %s \n", team);

    printf("1st Match Runs Given By %s: ", team);
    scanf("%f", &m1r_g);

    printf("1st Match Overs Given By %s(If all out then 50): ", team);
    scanf("%f", &m1o_g);

    printf("2nd Match Runs Given By %s: ", team);
    scanf("%f", &m2r_g);

    printf("2nd Match Overs Given By %s(If all out then 50): ", team);
    scanf("%f", &m2o_g);
    printf("\n");

    tr2 = m1r_g + m2r_g;
    to2 = m1o_g + m2o_g;

    nrr2 = tr2 / to2;   //2nd Net Run Rate

    nrr = nrr1 - nrr2;



    printf("%s Net Run Rate: +%0.3f NRR",team, nrr);
    printf("\n\n");
    printf("Developed By Plabon Rahman");

    return 0;
}
