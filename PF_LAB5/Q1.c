#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50], subscriptionType[20];

    const char correctUsername[] = "user123";
    const char correctPassword[] = "pass123";

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");

        printf("Enter your subscription type (basic, premium, vip): ");
        scanf("%s", subscriptionType);

        if (strcmp(subscriptionType, "basic") == 0) {
            printf("Access granted to Basic Content: News, Articles.\n");
        } else if (strcmp(subscriptionType, "premium") == 0) {
            printf("Access granted to Premium Content: News, Articles, Videos, Music.\n");
        } else if (strcmp(subscriptionType, "vip") == 0) {
            printf("Access granted to VIP Content: News, Articles, Videos, Music, Exclusive Webinars, Personalized Support.\n");
        } else {
            printf("Invalid subscription type.\n");
        }
    } else {
        printf("Incorrect username or password. Access denied.\n");
    }

    return 0;
}
