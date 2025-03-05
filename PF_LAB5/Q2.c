/* If the speed of a vehicle is above 100 km/h, it is overspeeding. If not, check if it is
 * between 60-100 km/h for normal driving, and so on. Write a program checks the
 * vehicle's speed and classifies it.
 */

#include<stdio.h>
int main()
{
    int speed;
    printf("Enter the speed of your car: ");
    scanf("%d",&speed);
    if(speed>100)
    {
        printf("\nThe car is overspeeding.");
    
    }
    else
    {
        if(speed>=60 && speed<=100)
        {
            printf("\nThe car is at normal speed");
        }
    }
}
