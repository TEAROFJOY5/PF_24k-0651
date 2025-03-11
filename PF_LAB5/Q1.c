#include <stdio.h>


int main() {
   char userName, pass, correctUser= 'f',  correctPass= 'F', subscriptionType;
   printf("Enter your user name: ");
   scanf(" %c",&userName);
   printf("\nEnter your Password: ");
   scanf(" %c",&pass);

    if ( userName== correctUser && pass == correctPass) {
        printf("Login successful!\n");

        printf("Enter your subscription type (basic (b), premium(p), vip(V)): ");
        scanf(" %c", &subscriptionType);

        if (subscriptionType=='b' || subscriptionType=='B') {
            printf("Access granted to Basic Content: News, Articles.\n");
        } else if (subscriptionType=='p' || subscriptionType=='P') {
            printf("Access granted to Premium Content: News, Articles, Videos, Music.\n");
        } else if (subscriptionType=='v' || subscriptionType=='V') {
            printf("Access granted to VIP Content: News, Articles, Videos, Music, Exclusive Webinars, Personalized Support.\n");
        } else {
            printf("Invalid subscription type.\n");
        }
    } else {
        printf("Incorrect username or password. Access denied.\n");
    }

    return 0;
}
   
