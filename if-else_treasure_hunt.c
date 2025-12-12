int main() {
    int pathChoice;
    scanf("%d", &pathChoice);

    if (pathChoice == 1) {
        printf("Player chooses the Left path.\n");
        int swampAction;
        scanf("%d", &swampAction);

        if (swampAction == 1) {
            printf("Poor choice, Game Over!\n");
            return 0;
        }
        else {
            printf("Player found a bridge.\n");
            int bridgeResult;
            scanf("%d", &bridgeResult);

            if (bridgeResult == 1) {
                printf("Player crosses the bridge safely.\n");
            }
            else {
                printf("Poor luck, Game Over!\n");
                return 0;
            }
        }
    }
    else if (pathChoice == 2) {
        printf("Player chooses the Middle path.\n");
        int puzzleAnswer;
        scanf("%d", &puzzleAnswer);

        if (puzzleAnswer == 582) {
            printf("Player solved the puzzle.\n");
        }
        else {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }
    else if (pathChoice == 3) {
        printf("Player chooses the Right path.\n");
        int vaultAnswer;
        scanf("%d", &vaultAnswer);

        if (vaultAnswer == 30) {
            printf("Player solved the puzzle.\n");
        }
        else {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }

    int chestChoice;
    scanf("%d", &chestChoice);

    if (chestChoice == 1) {
        printf("All that glitters is not gold, Game Over!\n");
    }
    else if (chestChoice == 2) {
        printf("All your efforts were for nothing, Game Over!\n");
    }
    else if (chestChoice == 3) {
        printf("Congratulations!! You won the treasure.\n");
    }

    return 0;
}
