#include <stdio.h>
#include <conio.h>

int main()
{
    int com_rate, sales, ch;
    printf("Welcome In Computer Program \nChoose what you want to do\n");

    printf("1) Comession amount \n2) Comession rate \n3) Total sales \n4) Sales without Comessiom \n\nChoose your need: ");
    scanf("%d", &ch);

    switch (ch)
    {
        int com_amount;
    case 1:
        printf("Enter the comession rate: ");
        scanf("%d", &com_rate);
        printf("Enter the sales: ");
        scanf("%d", &sales);
        com_amount = (com_rate / 100) * sales;
        printf("The commesion amount of the seller is %d", com_amount);

        break;
        int total_sales;
    case 3:
        total_sales = com_amount + sales;
        printf("The total sales of the seller is %d", total_sales);
        break;
        float rate, com2, sales2;
    case 2:
        printf("Enter the comession amount: ");
        scanf("%f", &com2);
        printf("Enter the total sales: ");
        scanf("%f", &sales2);
        rate = (com2 / sales2) * 100;
        printf("The comession rate of the seller is %.2f", rate);
        break;
        int sp, total_sale, comession;
    case 4:
        printf("Enter the total sales: ");
        scanf("%d", &total_sale);
        printf("Enter the comession: ");
        scanf("%d", &comession);
        sp = total_sale - comession;
        printf("The sales without comession amount is %d", sp);
    }
}