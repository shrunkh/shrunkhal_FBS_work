#include <stdio.h>

void main()
{
	float costprice, discount, sellingprice;
	
	printf("Enter the Cost Price of Book: ");
	scanf("%f", &costprice);
	
	printf("Enter Discount (in %%): ");
    scanf("%f", &discount);

    sellingprice = costprice - (costprice * discount / 100);

    printf("Selling Price of the Book = %.2f", sellingprice);
}
