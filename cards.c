#include <stdio.h>
#include <time.h> 

typedef struct {
    char card_holder_name[30];
    char card_number[20];
    int expiry_year;
    int cvv;
} Visa;

int main() {
   
    Visa karta[5] = {
        {"John Doe", "1234 5678 9012 3456", 2029, 123},
        {"Jane Smith", "2345 6789 0123 4567", 2029, 456},
        {"Ali Karimov", "3456 7890 1234 5678", 2025, 789},
        {"Sara Lee", "4567 8901 2345 6789", 2030, 234},
        {"Tom Brown", "5678 9012 3456 7890", 2023, 345}
    };

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int current_year = tm.tm_year + 1900;

    printf("Amal qilayotgan kartalar:\n");
    printf("Card Holder Name | Card Number         | Expiry Year | CVV\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        if (karta[i].expiry_year >= current_year) {
            printf("%-16s | %-20s | %-11d | %-3d\n", 
                   karta[i].card_holder_name, 
                   karta[i].card_number, 
                   karta[i].expiry_year, 
                   karta[i].cvv);
        }
    }
    return 0;
}