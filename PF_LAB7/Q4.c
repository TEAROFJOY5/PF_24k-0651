#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the range from a to b: ");
    scanf("%d%d",&a,&b);
    printf("\n");
    for(int i=a;i<=b;i++){
        if(i<0)
        {
            printf("\nInvalid Input!");
            return 1;
        }
        if(i<=9)
        {
            if(i==0){
            printf("Zero ");
            continue;
            }else if(i==1){
            printf("One ");
            continue;
            }else if(i==2){
            printf("Two ");
             continue;
            }else if(i==3){
            printf("Three ");
             continue;
            }else if(i==4){
            printf("Four ");
             continue;
            }else if(i==5){
            printf("Five ");
             continue;
            }else if(i==6){
            printf("Six ");
             continue;
            }else if(i==7){
            printf("Seven ");
             continue;
          }  else if(i==8){
            printf("Eight ");
             continue;
              
          }else if(i==9){
            printf("Nine ");
             continue;
          }
          }
    //    a++;
    if(i>9)
    {
        if(i%2==0)
        printf(" Even");
        else
        printf(" Odd");
    }
        
    }
}
