#include <stdio.h>

int main()
{
    int choice, quantity;
    int total = 0;
    int price;

    int tea = 0, coffee = 0, sandwich = 0;
    int burger = 0, pizza = 0, fries = 0;
    int juice = 0, icecream = 0;

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

                switch (choice)
                {
                    case 1:
                        tea = tea + quantity;
                        break;

                    case 2:
                        coffee = coffee + quantity;
                        break;

                    case 3:
                        sandwich = sandwich + quantity;
                        break;

                    case 4:
                        burger = burger + quantity;
                        break;

                    case 5:
                        pizza = pizza + quantity;
                        break;

                    case 6:
                        fries = fries + quantity;
                        break;

                    case 7:
                        juice = juice + quantity;
                        break;

                    case 8:
                        icecream = icecream + quantity;
                        break;
                }

                printf("Item added successfully!\n");
            }
            else
            {
                printf("Invalid quantity!\n");
            }
        }
        else if (choice == 9)
        {
            printf("\n===============================================\n");
            printf("              EMERTXE CAFE BILL\n");
            printf("===============================================\n");

            printf("%-15s %8s %10s %10s\n",
                   "Item", "Quantity", "Price", "Total");

            printf("-----------------------------------------------\n");

            if (tea > 0)
                printf("%-15s %8d %10d %10d\n",
                       "Tea", tea, 15, tea * 15);

            if (coffee > 0)
                printf("%-15s %8d %10d %10d\n",
                       "Coffee", coffee, 25, coffee * 25);

            if (sandwich > 0)
                printf("%-15s %8d %10d %10d\n",
                       "Sandwich", sandwich, 60, sandwich * 60);

            if (burger > 0)
                printf("%-15s %8d %10d %10d\n",
                       "Veg Burger", burger, 80, burger * 80);

            if (pizza > 0)
                printf("%-15s %8d %10d %10d\n",
                       "Pizza", pizza, 150, pizza * 150);

            if (fries > 0)
                printf("%-15s %8d %10d %10d\n",
                       "French Fries", fries, 70, fries * 70);

            if (juice > 0)
                printf("%-15s %8d %10d %10d\n",
                       "Fresh Juice", juice, 50, juice * 50);

            if (icecream > 0)
                printf("%-15s %8d %10d %10d\n",
                       "Ice Cream", icecream, 40, icecream * 40);

            printf("-----------------------------------------------\n");
            printf("Total Item Cost: Rs. %d\n", total);

            gst = total * 0.05;
            finalAmount = total + gst;

            printf("GST (5%%)       : Rs. %.2f\n", gst);
            printf("-----------------------------------------------\n");
            printf("FINAL BILL     : Rs. %.2f\n", finalAmount);
            printf("===============================================\n");

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
