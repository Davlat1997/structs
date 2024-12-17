#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char category[20];
    float price;
    int quantity;
} Grocery;

int main() {
    
    Grocery groceries[10] = {
        {"Milk", "Dairy", 2.5, 20},
        {"Cheese", "Dairy", 5.0, 10},
        {"Yogurt", "Dairy", 1.5, 50},
        {"Bread", "Bakery", 1.2, 100},
        {"Butter", "Dairy", 3.0, 15},
        {"Eggs", "Dairy", 2.0, 30},
        {"Apple", "Fruit", 1.5, 40},
        {"Orange Juice", "Beverage", 3.5, 25},
        {"Chicken", "Meat", 7.5, 10},
        {"Ice Cream", "Dairy", 4.5, 12}
    };

   
    printf("Sut mahsulotlari:\n");
    printf("Name            | Category  | Price | Quantity\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < 10; i++) {
        if (strcmp(groceries[i].category, "Dairy") == 0) {
            printf("%-15s | %-10s | %-5.1f | %-8d\n", 
                   groceries[i].name, 
                   groceries[i].category, 
                   groceries[i].price, 
                   groceries[i].quantity);
        }
    }

    return 0;
}