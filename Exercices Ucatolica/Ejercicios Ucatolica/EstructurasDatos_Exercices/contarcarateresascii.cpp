#include <stdio.h>
#include <string.h>

int main() {
    char string[1024];
    int c = 0;
    int count[128] = {0};
    int x;
    int counted = 0;

    printf("Enter a word:\n");
    scanf("%1023s", string);

    while (string[c] != '\0') {
        if(string[c] >= '!' && string[c] <= '~'){
            x = string[c] - '!';
            count[x]++;
        }
        c++;
    }

    int j = 0;
    while (string[j] != '\0') {
        int ch = string[j] - '!';

        if(count[ch] > 1){
            printf("Duplicate letter: %c, Occurrences: %d\n", ch + '!', count[ch]);
            count[ch] = -1;
            counted++;
        }

        j++;
    }

    if(counted < 1){
        printf("No duplicates found.\n");
    }

    return 0;
}
