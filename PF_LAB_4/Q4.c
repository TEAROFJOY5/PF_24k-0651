 /* An online shopping store is providing discounts on the items due to the Eid. If
  * the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
  * shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
  * shopping is 4000 to 6000, a 20% discount will be applied. If it's more than 6000
  * then a 35% discount will be applied to the cost of shopping. Print the actual
  * amount, saved amount and the amount after discount. The Minimum amount
  * eligible for a discount is 500.
  */
   
   #include<stdio.h>
   int main()
   {
       float price, discountedPrice, discount;
       printf("\nEnter the price of the item: ");
       scanf("%f",&price);
       if(price>=500 && price<2000)
       {
          
           discount=price*(5.0/100);
           discountedPrice=price-discount;
       }
       else if(price>=2000 && price<4000)
       {
           discount=price*(10.0/100);
           discountedPrice= price-discount;
       }
       else if(price>=4000 && price<6000)
       {
           discount= price*(20.0/100);
           discountedPrice= price-discount;
       }
       else if(price>6000)
       {
           discount= price*(35.0/100);
           discountedPrice= price-discount;
       }
     printf("\nActual Price of the item is %f\nDiscount of the %f has been given\nUpdated Price will be %f", price, discount, discountedPrice);
    }
