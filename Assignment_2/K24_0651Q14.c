#include <stdio.h>
void findCommonElements(int arr1[], int arr2[], int size)
{
    int common[10]; 
    int commonCount = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr1[i] == arr2[j])
            {
                int isDuplicate = 0;
                for(int k = 0; k < commonCount; k++)
                {
                    if(common[k] == arr1[i])
                    {
                        isDuplicate = 1;
                        break;
                    }
                }
                if(!isDuplicate)
                {
                    common[commonCount++] = arr1[i];
                }
                break;
            }
        }
    }
    if(commonCount == 0)
    {
        printf("No common elements\n");
    }
    else
    {
        printf("Common elements: ");
        for(int i = 0; i < commonCount; i++)
        {
            printf("%d ", common[i]);
        }
        printf("\n");
    }
}
int main()
{
    int arr1[10], arr2[10];
    printf("Enter 10 elements for Array 1:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 10 elements for Array 2:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }
    findCommonElements(arr1, arr2, 10);
    return 0;
}

