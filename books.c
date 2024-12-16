
#include <stdio.h>
#include <string.h>


typedef struct {
    char name[30];
    int birth_year;
} Nashrchi;


typedef struct {
    char title[30];
    float price;
    int published_year;
    Nashrchi nashirchi;
} Kitob;

int main() {
    
    Nashrchi  nashirchi01 = {"Alex Black", 1990};
    Nashrchi  nashirchi02 = {"Mary White", 1985};
    Nashrchi  nashirchi03 = {"John Green", 1975};

    Kitob kitoblar[10] = {
        {"Book A", 25.0, 2021, nashirchi01},
        {"Book B", 30.0, 2023, nashirchi02},
        {"Book C", 15.0, 1997, nashirchi03},
        {"Book D", 20.0, 1880, nashirchi02},
        {"Book E", 35.0, 1994, nashirchi02},
        {"Book F", 40.0, 1995, nashirchi01},
        {"Book G", 10.0, 1790, nashirchi02},
        {"Book H", 50.0, 1890, nashirchi01},
        {"Book I", 45.0, 1990, nashirchi02},
        {"Book J", 60.0, 1890, nashirchi03}
    };

   
    printf("21 asr kitoblari:\n");
    printf("Title           | Price | Published Year | Author Name  | Author Birth Year\n");
    printf("----------------------------------------------------------------------------\n");

  
    for (int i = 0; i < 10; i++) {
        if (kitoblar[i].published_year >= 2001) {
            printf("%-15s | %-5.1f | %-14d | %-12s | %-18d\n",
                   kitoblar[i].title,
                   kitoblar[i].price,
                   kitoblar[i].published_year,
                   kitoblar[i].nashirchi.name,
                   kitoblar[i].nashirchi.birth_year);
        }
    }

    return 0;
}