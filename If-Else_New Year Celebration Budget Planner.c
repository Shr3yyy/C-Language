#include <stdio.h>

int main() {
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d %d %d %d %d %d", &budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);  
    int totalFoodCost = numGuests * foodCostPerGuest;
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;
    if (totalCost <= budget && 
        numGuests > 5 && numGuests <= 50 && 
        (decorationCost * 10 < budget * 3 || totalFoodCost * 2 < budget) && 
        (numGuests <= 25 || musicCost > 0)) {
        printf("Celebration Approved\n");
    } else {
        printf("Celebration Denied\n");
    }
    
    return 0;
}
