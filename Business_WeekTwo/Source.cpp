#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
double AreaRectangle(double w, double l)
{
    double sum = 0;
    sum = w * l;
    return sum;
}

double Washingmachine(double num_Washingmachine)
{
    double ans = 0;
    ans = ((num_Washingmachine / 2.5) / 4);
    return ans;
}

double Dryingmachine(double num_Dryinggmachine)
{
    double Ans = 0;
    Ans = num_Dryinggmachine;
    return Ans;
}

double Space_Laundry(double sumSpace)
{
    double sum = 0;
    sum = sumSpace / 2;

    return sum;
}

int main()
{
    struct area
    {
        double sumArea = 0, ashing_machine = 0, Dryingg_machine = 0, Space = 0, Washing_machine = 0;
        double wl[2];
        char str[30];
    }Laundry;
    struct Business
    {
        double laundry_price = 0 , Dryingg_price = 0 ;
    }profit;


    printf(" Please specify name : ");
    gets_s(Laundry.str);




    printf("Please specify a width :");
    if (scanf_s("%lf", &Laundry.wl[0]))
    {
        printf("Please specify a legth :");
        if (scanf_s("%lf", &Laundry.wl[1]))
        {
            Laundry.sumArea = AreaRectangle(Laundry.wl[0], Laundry.wl[1]);
            Laundry.Washing_machine = Washingmachine(Laundry.sumArea);
            Laundry.Dryingg_machine = Dryingmachine(Laundry.Washing_machine);
            Laundry.Space = Space_Laundry(Laundry.sumArea);
            printf("\t\t\t\t Hi \t %s \t welcome to Laundry112  \n", Laundry.str);
            printf("\t\t\t\t -------------------------------------------  \n");
            printf(" \t\t\t\t-- Ans >> AreaRectangle  = %.2lf Square meter -- \n", Laundry.sumArea);
            printf(" \t\t\t\t-- Ans >> Washingmachine  = %.2lf   \n", Laundry.Washing_machine);
            printf(" \t\t\t\t-- Ans >> Dryingmachine  = %.2lf \n", Laundry.Dryingg_machine);
            printf(" \t\t\t\t-- Ans >> Space  = %.2lf \n", Laundry.Space);
            printf("\t\t\t\t -------------------------------------------  \n");

        }
        else
        {
            printf("\t\t\t ----- Please enter the number of numbers as integers. -----\n");
            printf("\t\t\t\t\t ----- End Program. ----- \n ");
        }
    }
    else
    {
        printf("\t\t\t ----- Please enter the number of numbers as integers. -----\n");
        printf("\t\t\t\t\t ----- End Program. ----- \n ");
    }
    return 0;

}