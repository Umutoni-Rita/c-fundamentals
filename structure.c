#include <stdio.h>


struct Item {
  char itemName[50];
  int quantity;
  float price;
  float totalAmount;
};

int main() {
 
  struct Item items[50];

  int numItems;

 
  printf("Enter the number of items: ");
  scanf("%d", &numItems);


  int i;
  for (i = 0; i < numItems; i++) {
    printf("Enter details for item %d:\n", i + 1);

    printf("Enter item name: ");
    scanf("%s", items[i].itemName);

    printf("Enter quantity: ");
    scanf("%d", &items[i].quantity);

    printf("Enter price: ");
    scanf("%f", &items[i].price);


    items[i].totalAmount = items[i].quantity * items[i].price;
  }

  
  printf("\nItem Name\tQuantity\tPrice\tTotal Amount\n");
  for (i = 0; i < numItems; i++) {
    printf("%s\t\t%d\t\t%.2f\t\t%.2f\n", items[i].itemName, items[i].quantity, items[i].price, items[i].totalAmount);
  }

  return 0;
}

