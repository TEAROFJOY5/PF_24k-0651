/* Write a program in C to read n number of values in an array and display in reverse order.
 */
 #include<stdio.h>
 int main()
 {
       int n,length=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    if(n<2){
        printf("\nInvalid size of array");
        return 1;
    }
    int arr[n],revs[n];
    printf("\nEnter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;arr[i]!='\0';i++)
    {
        length=n;
        revs[i]=arr[length-i-1];
    }
     printf("\nThe reverse of the array [");
    for(int i=0;i<n-1;i++)
    {
        printf("%d, ",arr[i]);
      if(i==n-2)
      printf("%d ] = ",arr[i+1]);
    }
     printf(" [");
    for(int i=0;i<n-1;i++)
    {
        printf("%d, ",revs[i]);
      if(i==n-2)
      printf("%d ]",revs[i+1]);
        
    }
 }
