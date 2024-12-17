#include <stdio.h>
#include <string.h>


typedef struct {
    char name[30];
    char manzil[30];
} Kompaniya;

typedef struct {
    char name[30];
    float narxi;
    int miqdori;
    Kompaniya company;
} Bozor;

int main() {
    
    Bozor Oziq_ovqatlar[5] = {
        {"Bozor 1", 50.0, 100, {"Kompaniya A", "USA"}},
        {"Bozor 2", 30.0, 200, {"Kompaniya B", "USA"}},
        {"Bozor 3", 20.0, 150, {"Kompaniya C", "Canada"}},
        {"Bozor 4", 40.0, 120, {"Kompaniya D", "UK"}},
        {"Bozor 5", 60.0, 90, {"Kompaniya E", "USA"}}
    };

    
    printf("AQShda ishlab chiqarilgan mahsulotlar:\n");
    printf("Name         | Price | Quantity | Company Name | Company Location\n");
    printf("-------------------------------------------------------------------\n");


    for (int i = 0; i < 5; i++) {
        if (strcmp(Oziq_ovqatlar[i].company.manzil, "USA") == 0) {
            printf("%-12s | %-5.1f | %-8d | %-12s | %-16s\n",
                   Oziq_ovqatlar[i].name,
                   Oziq_ovqatlar[i].narxi,
                   Oziq_ovqatlar[i].miqdori,
                   Oziq_ovqatlar[i].company.name,
                   Oziq_ovqatlar[i].company.manzil);
        }
    }

    return 0;
}