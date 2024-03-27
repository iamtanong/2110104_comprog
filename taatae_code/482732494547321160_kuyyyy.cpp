#include <stdio.h>
#include <string.h>

#include<stdlib.h>
#include <iostream>
// using namespace std;

#define MAX_DESCRIPTIONS 2

struct Person {
    char name[50];
    char descriptions[MAX_DESCRIPTIONS][100];
    int numDescriptions;
};

void writeToFile(struct Person people[], int size, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%s", people[i].name);
        for (int j = 0; j < people[i].numDescriptions; j++) {
            fprintf(file, " %s", people[i].descriptions[j]);
        }
        fprintf(file, "\n\n");
    }

    fclose(file);
}

void searchByName(const char *filename, const char *targetName) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    char name[50];
    char description[100];

    while (fscanf(file, "%s", name) != EOF) {
        if (strcmp(name, targetName) == 0) {
            printf("Found person named %s with descriptions: ", targetName);
            while (fscanf(file, "%s", description) != EOF && description[4] != '\n') {
                printf("%s ", description);
               // if(description == '\n') break;
            }
            printf("\n");
            fclose(file);
            return;
        }
    }

    printf("Person with name %s not found.\n", targetName);
    fclose(file);
}

void searchByDescription(const char *filename, const char *targetDescription) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    char name[50];
    char description[100];

    while (fscanf(file, "%s", name) != EOF) {
        while (fscanf(file, "%s", description) != EOF && description[0] != '\n') {
            if (strcmp(description, targetDescription) == 0) {
                printf("- %s\n", name);
                break;
            }
        }
    }

    fclose(file);
}

int main() {
    struct Person people[2];  // Adjust the size based on the number of people to store
    int i, j;

    for (i = 0; i < 2; i++) {  // Adjust the number of people to input
        printf("Enter information for person %d\n", i + 1);
        printf("Name: ");
        // scanf("%s", people[i].name);
        std::cin >> people[i].name;
        
        printf("Enter the number of descriptions: ");
        // scanf("%d", &people[i].numDescriptions);
        std::cin >> people[i].numDescriptions;
        
        std::cout << people[i].numDescriptions << std::endl;

        for (j = 0; j < people[i].numDescriptions; j++) {
            printf("Description %d: ", j + 1);
            // scanf("%s", people[i].descriptions[j]);
            std::cin >> people[i].descriptions[j];

        }
    
    }

    // for(auto i : people) {
    //     std::cout << i.name << " " << i.numDescriptions << std::endl;
    //     for(auto j : )
    // }

    char filename[] = "people.txt";
    writeToFile(people, 3, filename);

    char searchName[50];
    printf("Search by name: ");
    scanf("%s", searchName);
    searchByName(filename, searchName);

    char searchDescription[100];
    printf("Search by description: ");
    scanf("%s", searchDescription);
    searchByDescription(filename, searchDescription);

    return 0;
}
