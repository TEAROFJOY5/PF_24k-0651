#include <stdio.h>
#include <string.h>

#define MAX_PACKAGES 100

struct Package {
    char name[50];
    char destination[50];
    int duration;       // in days
    float cost;
    int seatsAvailable;
};

void displayPackages(struct Package packages[], int count) {
    if (count == 0) {
        printf("\nNo travel packages available.\n");
        return;
    }

    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < count; i++) {
        printf("\nPackage #%d", i + 1);
        printf("\nName: %s", packages[i].name);
        printf("\nDestination: %s", packages[i].destination);
        printf("\nDuration: %d days", packages[i].duration);
        printf("\nCost: $%.2f", packages[i].cost);
        printf("\nSeats Available: %d", packages[i].seatsAvailable);
       
    }
}

// Function to book a package
void bookPackage(struct Package packages[], int count) {
    int packageNumber;
    displayPackages(packages, count);

    printf("\nEnter the package number you want to book: ");
    scanf("%d", &packageNumber);

    if (packageNumber < 1 || packageNumber > count) {
        printf("Invalid package number.\n");
        return;
    }

    if (packages[packageNumber - 1].seatsAvailable > 0) {
        packages[packageNumber - 1].seatsAvailable--;
        printf("Booking successful for package '%s'.\n", packages[packageNumber - 1].name);
    } else {
        printf("Sorry, no seats available for this package.\n");
    }
}

int main() {
    struct Package packages[MAX_PACKAGES];
    int packageCount = 3; 
    int choice;

   
    strcpy(packages[0].name, "Eiffel Tower");
    strcpy(packages[0].destination, "France");
    packages[0].duration = 5;
    packages[0].cost = 1500.0;
    packages[0].seatsAvailable = 10;

    strcpy(packages[1].name, "Mountain Adventure");
    strcpy(packages[1].destination, "Gilgit Baltistan");
    packages[1].duration = 7;
    packages[1].cost = 2200.0;
    packages[1].seatsAvailable = 5;

    strcpy(packages[2].name, "Everything in one City");
    strcpy(packages[2].destination, "Dubai");
    packages[2].duration = 4;
    packages[2].cost = 1800.0;
    packages[2].seatsAvailable = 8;

    while (1) {
        printf("\n\n--- Travel Agency System ---");
        printf("\n1 - Display Travel Packages");
        printf("\n2 - Book a Package");
        printf("\n3 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayPackages(packages, packageCount);
                break;
            case 2:
                bookPackage(packages, packageCount);
                break;
            case 3:
                printf("Thank you for using the system.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
