
//program to store a list of 10 items with add/delete/display options
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10
#define MAX_LEN   50  // includes '\0'

int main(void) {
    char items[MAX_ITEMS][MAX_LEN] = { "" }; // all empty strings
    int size = 0;

    while (1) {
        int choice;
        printf("\nENTER YOUR CHOICE\n");
        printf("0. EXIT\n");
        printf("1. ADD AN ITEM (at position 1-10)\n");
        printf("2. DELETE AN ITEM (by position)\n");
        printf("3. DISPLAY ALL ITEMS\n");
        printf("Your choice: ");

        if (scanf("%d", &choice) != 1) return 0;
        getchar(); // eat newline after the number

        if (choice == 0) {
            printf("EXITING...\n");
            return 0;
        }

        switch (choice) {
        case 1: {
            if (size == MAX_ITEMS) {
                printf("LIST IS FULL. DELETE AN ITEM FIRST.\n");
                break;
            }
            int pos;
            printf("ENTER POSITION (1-%d): ", MAX_ITEMS);
            if (scanf("%d", &pos) != 1) return 0;
            getchar();

            if (pos < 1 || pos > MAX_ITEMS) {
                printf("INVALID POSITION.\n");
                break;
            }
            int idx = pos - 1;
            if (items[idx][0] != '\0') {
                printf("POSITION %d ALREADY HAS: \"%s\". DELETE IT FIRST.\n", pos, items[idx]);
                break;
            }

            printf("ITEM %d: ", pos);
            if (fgets(items[idx], sizeof items[idx], stdin) == NULL) {
                items[idx][0] = '\0';
                break;
            }
            items[idx][strcspn(items[idx], "\n")] = '\0'; // remove trailing newline

            if (items[idx][0] == '\0') {
                printf("EMPTY INPUT. NOT ADDED.\n");
            } else {
                size++;
                printf("ITEM ADDED SUCCESSFULLY.\n");
            }
            break;
        }

        case 2: {
            if (size == 0) {
                printf("NOTHING TO DELETE.\n");
                break;
            }
            int pos;
            printf("ENTER POSITION TO DELETE (1-%d): ", MAX_ITEMS);
            if (scanf("%d", &pos) != 1) return 0;
            getchar();

            if (pos < 1 || pos > MAX_ITEMS) {
                printf("INVALID POSITION.\n");
                break;
            }
            int idx = pos - 1;
            if (items[idx][0] == '\0') {
                printf("POSITION %d IS ALREADY EMPTY.\n", pos);
            } else {
                items[idx][0] = '\0';
                size--;
                printf("ITEM %d DELETED.\n", pos);
            }
            break;
        }

        case 3: {
            printf("\nTHE ITEMS ARE:\n");
            for (int i = 0; i < MAX_ITEMS; i++) {
                if (items[i][0] == '\0')
                    printf("ITEM %2d: (empty)\n", i + 1);
                else
                    printf("ITEM %2d: %s\n", i + 1, items[i]);
            }
            printf("\n");
            break;
        }

        default:
            printf("INVALID CHOICE.\n");
        }
    }
}
  
