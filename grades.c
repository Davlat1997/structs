#include <stdio.h>
#include <string.h>


typedef struct {
    char first_name[30];
    char last_name[30];
} Student;


typedef struct {
    char name[30];
} Mavzu;


typedef struct {
    float ballar;
    Mavzu mavzu;
    Student student;
} Ball;

int main() {
  
    Ball ballar[5] = {
        {85, {"Math"}, {"John", "Doe"}},
        {90, {"Physics"}, {"Jane", "Smith"}},
        {70, {"Chemistry"}, {"Ali", "Karimov"}},
        {65, {"Biology"}, {"Sara", "Lee"}},
        {75, {"English"}, {"Tom", "Brown"}}
    };

  
    float umumiy_ballar = 0;
    for (int i = 0; i < 5; i++) {
        umumiy_ballar += ballar[i].ballar;
    }
    float urtacha_ball = umumiy_ballar / 5;

 
    printf("O'rtacha bahodan yuqori ball to'plagan talabalar:\n");
    printf("First Name | Last Name | Subject Name  | Score\n");
    printf("------------------------------------------------\n");

 
    for (int i = 0; i < 5; i++) {
        if (ballar[i].ballar > urtacha_ball) {
            printf("%-10s | %-9s | %-12s | %.1f\n",
                   ballar[i].student.first_name,
                   ballar[i].student.last_name,
                   ballar[i].mavzu.name,
                   ballar[i].ballar);
        }
    }

    return 0;
}