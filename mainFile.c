#include <stdio.h>

int main() {
    /*map size
    
    -Giving height = 20 means robot will have 18 free height spaces
    -Same with width

    */

    int mapHeight = 7;
    int mapWidth = 14;
    
    for (int i = 0; i < mapHeight; i++) {
        if (i == 0 || i == mapHeight - 1) {
            for (int j = 0; j < mapWidth; j++) {
                printf("#");
            }
            printf("\n");
        } else {
            printf("#");
            for (int j = 1; j < mapWidth - 1; j++) {
                printf(" ");
            }
            printf("#\n");
        }
    }
}