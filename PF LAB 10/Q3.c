#include <stdio.h>
#include <string.h>

struct car {
    char make[20];
    char model[20];
    int year;
    float mileage;
    float price;
};

void addCar(struct car Cars[100], int *carCounts) {
    printf("\nEnter the manufacturer: ");
    scanf("%s", Cars[*carCounts].make);
    printf("Enter the model of the car: ");
    scanf("%s", Cars[*carCounts].model);
    printf("Enter the year of the car: ");
    scanf("%d", &Cars[*carCounts].year);
    printf("Enter the price and mileage of the car: ");
    scanf("%f %f", &Cars[*carCounts].price, &Cars[*carCounts].mileage);
    (*carCounts)++;
    printf("Car added successfully!\n");
}

void display(struct car Cars[100], int *carCounts) {
    if (*carCounts == 0) {
        printf("\nNo cars available.\n");
        return;
    }

    for (int i = 0; i < *carCounts; i++) {
        printf("\nCar #%d", i + 1);
        printf("\nMake: %s", Cars[i].make);
        printf("\nModel: %s", Cars[i].model);
        printf("\nYear: %d", Cars[i].year);
        printf("\nPrice: %.2f", Cars[i].price);
        printf("\nMileage: %.2f", Cars[i].mileage);
        
    }
    printf("\n");
}

void searchCar(struct car Cars[100], int *carCounts) {
    char searchTerm[20];
    int found = 0;
    
    printf("\nEnter make or model to search: ");
    scanf("%s", searchTerm);

    for (int i = 0; i < *carCounts; i++) {
        if (strcmp(Cars[i].make, searchTerm) == 0 || strcmp(Cars[i].model, searchTerm) == 0) {
            printf("\nFound Car #%d", i + 1);
            printf("\nMake: %s", Cars[i].make);
            printf("\nModel: %s", Cars[i].model);
            printf("\nYear: %d", Cars[i].year);
            printf("\nPrice: %.2f", Cars[i].price);
            printf("\nMileage: %.2f", Cars[i].mileage);
           
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo matching car found.\n");
    }
}

int main() {
    int choice;
    struct car Cars[100];
    int carCounts = 0;

    while (1) {
        printf("\n\nWelcome to the Dealership");
        printf("\nChoose an option:");
        printf("\n1 - Add Car");
        printf("\n2 - Display Cars");
        printf("\n3 - Search Cars");
        printf("\n4 - Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCar(Cars, &carCounts);
                break;
            case 2:
                display(Cars, &carCounts);
                break;
            case 3:
                searchCar(Cars, &carCounts);
                break;
            case 4:
                printf("\nExiting the program.\n");
                return 0;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
}
