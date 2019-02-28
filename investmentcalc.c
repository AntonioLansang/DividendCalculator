#include <stdio.h>
#include <stdlib.h>


float DividendPayout( int Quant , int years, float DivPayOut)
{
        int k;
        float TotalDivPayOut;
        TotalDivPayOut=0;

        printf("Quant: %d  Years: %d   DivPayOut: %f\n");

        for(k=1;k<=years;k++)
        {
                TotalDivPayOut=TotalDivPayOut+Quant*(DivPayOut+.02*k);
                printf("Payout after %d year: %.2f\n", k, TotalDivPayOut);
        }
        return TotalDivPayOut;
}



int main()
{
        int QuantOfShares;
        int YearsHeld;
        int years;
        float PriceOfShares;
        float Cost;
        float DivPayOut;
        float TotalDivPayOut;

        printf("How many shares did you buy?");
        scanf("%d", &QuantOfShares);

        printf("Price per share: ");
        scanf("%f", &PriceOfShares);

        printf("Individual Dividend PayOut: ");
        scanf("%f", &DivPayOut);

        printf("How many years are you going to keep it?");
        scanf("%d", &years);


        Cost=PriceOfShares*QuantOfShares;
        printf("This has cost you:$%.2f\n", Cost);

        TotalDivPayOut=DividendPayout(QuantOfShares, years, DivPayOut);

        printf("You made %.2f from dividends\n", TotalDivPayOut);
        return 0;
}
