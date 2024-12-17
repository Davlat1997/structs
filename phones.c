#include <stdio.h>


typedef struct {
    char name[64];
    char brend[32];
    int narxi;
    char ram[12];
    char rangi[16];
} Tell;

int main() {
   
    Tell telfonlar[10] = {
        {"Galaxy S20", "Samsung", 800, "8GB", "Black"},
        {"iPhone 12", "Apple", 1000, "6GB", "White"},
        {"Pixel 6", "Google", 600, "8GB", "Blue"},
        {"Redmi Note 10", "Xiaomi", 200, "4GB", "Gray"},
        {"OnePlus 9", "OnePlus", 700, "12GB", "Black"},
        {"Galaxy A51", "Samsung", 400, "6GB", "White"},
        {"iPhone SE", "Apple", 500, "3GB", "Red"},
        {"Moto G Power", "Motorola", 300, "4GB", "Blue"},
        {"Nokia 8.3", "Nokia", 650, "8GB", "Green"},
        {"Xperia 5 II", "Sony", 900, "8GB", "Black"}
    };

    
    printf("Narxi $500 dan yuqori telefonlar:\n");
    printf("Name         | Brand      | Price | RAM  | Color\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < 10; i++) {
        if (telfonlar[i].narxi > 500) {
            printf("%-12s | %-10s | %-5d | %-4s | %-6s\n", 
                   telfonlar[i].name, 
                   telfonlar[i].brend, 
                   telfonlar[i].narxi, 
                   telfonlar[i].ram, 
                   telfonlar[i].rangi);
        }
    }

    return 0;
}