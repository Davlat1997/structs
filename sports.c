#include <stdio.h>
#include <string.h>


typedef struct {
    char name[30];
    int capacity;
} Stadium;


typedef struct {
    char team_name[30];
    char coach[30];
    int players_count;
    int founded_year;
    Stadium stadium;
} Jamoa;

int main() {
    
    Jamoa jamoaa[5] = {
        {"Team A", "Coach A", 11, 1950, {"Stadium A", 50000}},
        {"Team B", "Coach B", 15, 1970, {"Stadium B", 40000}},
        {"Team C", "Coach C", 20, 1960, {"Stadium C", 30000}},
        {"Team D", "Coach D", 18, 1980, {"Stadium D", 60000}},
        {"Team E", "Coach E", 12, 1990, {"Stadium E", 45000}}
    };

    
    Jamoa eski_jamoa = jamoaa[0];
    for (int i = 1; i < 5; i++) {
        if (jamoaa[i].founded_year < eski_jamoa.founded_year) {
            eski_jamoa = jamoaa[i];
        }
    }

    printf("Eng eski jamoa:\n");
    printf("Team Name    | Coach       | Players Count | Founded Year | Stadium Name\n");
    printf("----------------------------------------------------------------------\n");

   
    printf("%-12s | %-11s | %-13d | %-12d | %-12s\n",
           eski_jamoa.team_name,
           eski_jamoa.coach,
           eski_jamoa.players_count,
           eski_jamoa.founded_year,
           eski_jamoa.stadium.name);

    return 0;
}