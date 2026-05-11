#include <stdio.h>
#include <conio.h>

int a = 45;

int main()
{
    printf("Welcome in NIC ATM\n");
    printf("Please Wait your transection is being propcessed\n");

    int ch;
    printf("Please choose your language\n");
    printf("1) English\n");
    printf("2) Nepali\n");

    printf("Enter your chooice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Thank you for choosing english\n");
        int pin, i;

        printf("Please Enter your pin: ");
        scanf("%d", &pin);

        if (pin != 0000)
        {
            printf("Sorry you entered invalid pin\n");
            printf("Please enter your valid pin:");
            scanf("%d", &pin);
        }
        else if (pin == 0000)
        {
            printf("Please Select An Option\n");

            int ch2;
            printf("1) Fast cash\n");
            printf("2) Cash Withdraw\n");
            printf("Enter your chooice: ");
            scanf("%d", &ch2);
            switch (ch2)
            {
            case 1:
                printf("LoL");
                break;
            case 2:
                printf("Please select an account type\n");

                int ch3;
                printf("1) Saving account\n");
                printf("2) Current account\n");
                printf("3) Credit\n");

                printf("Enter your chooice: ");
                scanf("%d", &ch3);

                switch (ch3)
                {
                case 1:
                    printf("Enter the amount to be withdraw: ");
                    int cost, ch4;
                    scanf("%d", &cost);

                    printf("1) Continued process\n");
                    printf("2) Correction\n");
                    printf("3) Cancel\n");
                    printf("Enter your chooice: ");
                    scanf("%d", &ch4);
                    switch (ch4)
                    {
                    case 3:
                        break;
                    case 2:
                        printf("Enter the amount to be withdraw");
                        scanf("%d", &cost);

                        printf("Please wait\n");
                        printf("Your transection is being processed: \n");
                        printf("Your withdrawed amount is %d", cost);

                        break;

                    case 1:
                        printf("The withdrawed cost is %d\n", cost);
                        printf("Your transection is being processed\n");
                        printf("Your withdrawed amount is %d\n", cost);
                        printf("Thank you using our atm ");
                        break;
                    }
                }
                break;
            }
        }

        break;
    case 2:
        printf("Sorry nepali is not available now please choose english");
              break;
    }
}