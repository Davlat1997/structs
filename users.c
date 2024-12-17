#include <stdio.h>

// User struct
typedef struct {
    char first_name[20];
    char last_name[20];
    int birth_year;
    char location[20];
    char phone[15];
} User;

int main() {
   
    User user01 = {"John", "Doe", 1990, "Tashkent", "+998901234567"};
    User user02 = {"Jane", "Smith", 1985, "Samarkand", "+998901234568"};
    User user03 = {"Ali", "Karimov", 2000, "Bukhara", "+998901234569"};

  
    printf("Foydalanuvchilar Jadvali\n");
    printf("First Name | Last Name | Birth Year | Location   | Phone\n");
    printf("------------------------------------------------------\n");
    printf("%-10s | %-9s | %-10d | %-10s | %-13s\n", user01.first_name, user01.last_name, user01.birth_year, user01.location, user01.phone);
    printf("%-10s | %-9s | %-10d | %-10s | %-13s\n", user02.first_name, user02.last_name, user02.birth_year, user02.location, user02.phone);
    printf("%-10s | %-9s | %-10d | %-10s | %-13s\n", user03.first_name, user03.last_name, user03.birth_year, user03.location, user03.phone);

    return 0;
}
