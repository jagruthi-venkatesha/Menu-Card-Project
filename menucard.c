#include <stdio.h>

int main()
{
    int choice, quantity;
    int total = 0;
    int price;
    float gst, finalAmount;

    do
    {
        printf("\n====================================\n");
        printf("       WELCOME TO EMERTXE CAFE\n");
        printf("====================================\n");

        printf("\n------------- MENU CARD ------------\n");
        printf("1. Tea                 - Rs. 15\n");
        printf("2. Coffee              - Rs. 25\n");
        printf("3. Sandwich            - Rs. 60\n");
        printf("4. Veg Burger          - Rs. 80\n");
        printf("5. Pizza               - Rs. 150\n");
        printf("6. French Fries        - Rs. 70\n");
        printf("7. Fresh Juice         - Rs. 50\n");
        printf("8. Ice Cream           - Rs. 40\n");
        printf("9. Generate Bill\n");
        printf("0. Exit\n");
        printf("------------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 8)
        {
            switch (choice)
            {
                case 1:
                    price = 15;
                    printf("You selected Tea\n");
                    break;

                case 2:
                    price = 25;
                    printf("You selected Coffee\n");
                    break;

                case 3:
                    price = 60;
                    printf("You selected Sandwich\n");
                    break;

                case 4:
                    price = 80;
                    printf("You selected Veg Burger\n");
                    break;

                case 5:
                    price = 150;
                    printf("You selected Pizza\n");
                    break;

                case 6:
                    price = 70;
                    printf("You selected French Fries\n");
                    break;

                case 7:
                    price = 50;
                    printf("You selected Fresh Juice\n");
                    break;

                case 8:
                    price = 40;
                    printf("You selected Ice Cream\n");
                    break;
            }

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (quantity > 0)
            {
                total = total + (price * quantity);
                printf("Item added successfully!\n");
            }
            else
            {
                printf("Invalid quantity!\n");
            }
        }
        else if (choice == 9)
        {
            gst = total * 0.05;
            finalAmount = total + gst;

            printf("\n====================================\n");
            printf("          EMERTXE CAFE BILL\n");
            printf("====================================\n");
            printf("Total Item Cost   : Rs. %d\n", total);
            printf("GST (5%%)          : Rs. %.2f\n", gst);
            printf("------------------------------------\n");
            printf("TOTAL BILL        : Rs. %.2f\n",
                   finalAmount);
            printf("====================================\n");
            printf("Thank you for visiting Emertxe Cafe!\n");
        }
        else if (choice == 0)
        {
            printf("\nThank you for visiting Emertxe Cafe!\n");
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
