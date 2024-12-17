#include <stdio.h>


typedef struct {
    char model[20];
    char brand[20];
    int price;
    int year;
} Mashina;

int main() {
  
    Mashina mashinalar[10] = {
        {"Model S", "Tesla", 79999, 2022},
        {"Civic", "Honda", 24000, 2023},
        {"Camry", "Toyota", 27000, 2023},
        {"Mustang", "Ford", 55000, 2022},
        {"911", "Porsche", 120000, 2021},
        {"Aventador", "Lamborghini", 393695, 2023},
        {"Corolla", "Toyota", 20000, 2021},
        {"Phantom", "Rolls Royce", 450000, 2023},
        {"Altima", "Nissan", 25000, 2022},
        {"CX-5", "Mazda", 28000, 2023}
    };

    
    Mashina most_expensive = mashinalar[0];
    for (int i = 1; i < 10; i++) {
        if (mashinalar[i].price > most_expensive.price) {
            most_expensive = mashinalar[i];
        }
    }

 
    printf("Eng qimmat mashina:\n");
    printf("Model       | Brand        | Price   | Year\n");
    printf("-------------------------------------------\n");
    printf("%-11s | %-12s | %-7d | %-4d\n", most_expensive.model, most_expensive.brand, most_expensive.price, most_expensive.year);

    return 0;
}