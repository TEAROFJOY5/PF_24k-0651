 /* Write a C program to input a character from the user and check whether the
  * given character is a small alphabet, capital alphabet, digit, or special character,
  * using if else.
  */
   
   #include<stdio.h>
   int main()
   {
       int a;
       char sym;
       printf("Input the character: ");
       scanf(" %c",&sym);
       getchar();
       a= (int )sym;  // Typecasting characters into their approriate integer values in ASCII codes.
       if((32<=a && 47>=a) || (58<=a && 64>=a) || (91<=a && 96>=a))
       printf("\nSpecial characters");
       else if(48<=a && 57>=a)
       printf("\nDigits");
       else if(65<=a && 90>=a)
       printf("\nCapital alphabets");
       else if(97<=a && 122>=a)
       printf("\nLowerCase alphabets");
       
   }
