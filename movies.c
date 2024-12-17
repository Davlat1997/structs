#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    char tavsifi[100];
} Janri;

typedef struct {
    char name[30];
    float reyting;
    int reliz_yili;
    Janri janri;
} Kino;

int main() {

    Kino kinolar[5] = {
        {"Kino A", 8.5, 2022, {"Action", "Action-packed thriller"}},
        {"Kino B", 9.0, 2023, {"Action", "High-octane adventure"}},
        {"Kino C", 7.5, 2019, {"Comedy", "Lighthearted and funny"}},
        {"Kino D", 8.0, 2020, {"Drama", "Emotionally engaging story"}},
        {"Kino E", 6.5, 2018, {"Horror", "Scary and suspenseful"}}
    };

  
    printf("\"Action\" janridagi kinolar:\n");
    printf("Name           | Rating | Release Year | Genre Name  | Genre Description\n");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        if (strcmp(kinolar[i].janri.name, "Action") == 0) {
            printf("%-15s | %-6.1f | %-13d | %-12s | %-20s\n",
                   kinolar[i].name,
                   kinolar[i].reyting,
                   kinolar[i].reliz_yili,
                   kinolar[i].janri.name,
                   kinolar[i].janri.tavsifi);
        }
    }

    return 0;
}