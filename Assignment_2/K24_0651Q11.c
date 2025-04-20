/* Write a program that defines a function bool hasDuplicates(int arr[], int size) to check if there are any duplicate numbers in an array. In main(), take an array of integers from the user and call the function. If the function returns true, print a mesage "Duplicates found." Otherwise, print "No duplicates."
 */
 #include<stdio.h>
 #include<stdbool.h>
 bool hasDuplicates(int arr[], int size)
{
     for(int i=0;i<size;i++)
    {
         for(int j = i + 1; j < size; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                return true;
            }
        }
    }
    return false;
}

int main() 
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    if(hasDuplicates(arr, size)) {
        printf("Duplicates found.\n");
    } else {
        printf("No duplicates.\n");
    }

}
