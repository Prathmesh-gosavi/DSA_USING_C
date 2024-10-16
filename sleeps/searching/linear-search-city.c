#include <stdio.h>
#include <string.h>

#define MAX_CITY 100
#define MAX_LEN_OF_NAME 50

struct city {
    char name[MAX_LEN_OF_NAME];
    int std_codes;
};

int main() {
    struct city cities[MAX_CITY];
    FILE *f;

    f = fopen("cities.txt", "r");
    if (f == NULL) {
        printf("Unable to open the file\n");
        return 1;
    }

    int i = 0;
    while (fscanf(f, " %[^,] , %d", cities[i].name, &cities[i].std_codes) != EOF) {
        // Remove trailing spaces from city name (optional step if needed)
        cities[i].name[strcspn(cities[i].name, "\n")] = 0;

        printf("Read city: '%s', STD code: %d\n", cities[i].name, cities[i].std_codes);  // Debugging line
        i++;
    }
    fclose(f);

    char keycity[MAX_LEN_OF_NAME];
    int flag = 0;
    printf("Enter the city name: ");
    scanf("%s", keycity);

    for (int j = 0; j < i; j++) {
        if (strcmp(cities[j].name, keycity) == 0) {
            printf("City is found: %s, STD code is: %d\n", cities[j].name, cities[j].std_codes);
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("City is not found\n");
    }

    return 0;
}
