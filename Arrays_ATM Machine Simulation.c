#include <stdio.h>

typedef struct {
    int accountNumber;
    int pin;
    long long balance;
} Account;

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    Account accounts[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %lld", &accounts[i].accountNumber, &accounts[i].pin, &accounts[i].balance);
    }
    
    int loggedInIndex = -1;
    char choice;
    
    while (scanf(" %c", &choice) == 1) {
        if (choice == 'A') {
            int accNum, pinNum;
            scanf("%d %d", &accNum, &pinNum);
            
            if (loggedInIndex != -1) {
                printf("User %d is already using the ATM.\n", accounts[loggedInIndex].accountNumber);
            } else {
                int found = -1;
                for (int i = 0; i < n; i++) {
                    if (accounts[i].accountNumber == accNum && accounts[i].pin == pinNum) {
                        found = i;
                        break;
                    }
                }
                if (found != -1) {
                    loggedInIndex = found;
                    printf("Welcome User %d\n", accNum);
                } else {
                    printf("Wrong Credentials!\n");
                }
            }
        } 
        else if (choice == 'B') {
            if (loggedInIndex == -1) {
                printf("Login first!\n");
            } else {
                printf("Balance: Rs.%lld\n", accounts[loggedInIndex].balance);
            }
        } 
        else if (choice == 'C') {
            long long amount;
            scanf("%lld", &amount);
            
            if (loggedInIndex == -1) {
                printf("Login first!\n");
            } else {
                accounts[loggedInIndex].balance += amount;
                printf("New Balance: Rs.%lld\n", accounts[loggedInIndex].balance);
            }
        } 
        else if (choice == 'D') {
            long long amount;
            scanf("%lld", &amount);
            
            if (loggedInIndex == -1) {
                printf("Login first!\n");
            } else {
                if (accounts[loggedInIndex].balance >= amount) {
                    accounts[loggedInIndex].balance -= amount;
                    printf("New Balance: Rs.%lld\n", accounts[loggedInIndex].balance);
                } else {
                    printf("Insufficient balance!\n");
                }
            }
        } 
        else if (choice == 'E') {
            if (loggedInIndex == -1) {
                printf("No user is currently logged in.\n");
            } else {
                loggedInIndex = -1;
                printf("Logged out successfully.\n");
            }
        } 
        else if (choice == 'F') {
            if (loggedInIndex != -1) {
                printf("Exiting the ATM without logging out is not allowed.\n");
            } else {
                printf("Exiting ATM. Thank you!\n");
                break;
            }
        } 
        else {
            printf("Invalid choice. Please enter A, B, C, D, E, or F.\n");
        }
    }
    
    return 0;
}
