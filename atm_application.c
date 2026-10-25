#include <stdio.h>

int main() {
    double balance = 0.0;
    int choice = 0;

    printf("Enter current account balance: ");
    if (scanf("%lf", &balance) != 1) {
        printf("Invalid input for balance.\n");
        return 1;
    }

    printf("Enter choice (1 for balance inquiry, 2 for cash withdrawal, 3 for cash deposit): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid option\n");
        return 0;
    }

    switch (choice) {
        case 1:
            printf("Current balance: %.2lf\n", balance);
            break;

        case 2: {
            double withdrawal_amount = 0.0;
            printf("Enter withdrawal amount: ");
            if (scanf("%lf", &withdrawal_amount) != 1) {
                printf("Invalid amount entered.\n");
                return 1;
            }

            if (withdrawal_amount <= balance) {
                balance -= withdrawal_amount;
                printf("Transaction successful\n");
                printf("Remaining balance: %.2lf\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;
        }

        case 3: {
            double deposit_amount = 0.0;
            printf("Enter deposit amount: ");
            if (scanf("%lf", &deposit_amount) != 1) {
                printf("Invalid amount entered.\n");
                return 1;
            }

            balance += deposit_amount;
            printf("Deposit successful\n");
            printf("Updated balance: %.2lf\n", balance);
            break;
        }

        default:
            printf("Invalid option\n");
            break;
    }

    return 0;
}
