#include <stdio.h>

int main() {
    char choice;

    do {
        printf("Choose an option:\n");
        printf("0. Play a local game.\n");
        printf("1. Play an online game.\n");
        printf("2. View top scores.\n");
        printf("3. Exit.\n");

        scanf(" %c", &choice);

        switch (choice) {
            case '0':
                printf("Playing local\n");
                printf("0. Single player\n");
                printf("1. co-op...\n");
                char choice;
                scanf(" %c", &choice);
                switch (choice) {
                    case '0':
                        printf("Playing single player...\n");
                        break;
                    case '1':
                        printf("Playing co-op\n");
                        break;
                }
                break;
            case '1':
                printf("playing online\n");
                break;
            case '2':
                printf("Caleb: 999,999 points.\n");
                break;
            case 'q':
            case '3':
                break;
            default:
                printf("Try a valid input.\n");
        }
    } while (choice != '3' && choice != 'q');
    printf("Thank you for playing.\n");
    return 0;
}