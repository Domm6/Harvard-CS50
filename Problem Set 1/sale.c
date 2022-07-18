#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int  thirty= 30;
    float regularprice = get_float("Original Price of item: ");
    float saleprice = regularprice * 0.75;
    printf("Sale Price: %.2f\n", saleprice);
    char c = get_char("Is this too expensive for you to purchase?\n");

        if ( c == 'n')
            printf("Great, lets continue shopping\n");
        else if (c == 'y')
            printf("Alright, have a great rest of your day\n");
    printf("Lets see what percent this item is of your weekly allowance.\n");
        //wa = weekly allowance
        int wa = get_int("Waht is your weekly allowance: ");
        //powa = percent of weekly allowance
        float powa = (saleprice / wa * 100);
            printf("It is %.2f percent of your allowance\n", powa);
                if (powa > thirty)
                    printf("This is not a good use of your money as the item is more than 30 percent of your weekly allowance.\n");
                else
                    printf("This is a good use of your money as the item is under 30 percent of your weekly allownace.\n");

}