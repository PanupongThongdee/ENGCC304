#include <stdio.h>
#include <string.h>

struct Student {
    char Name[50];
    char ID[10];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
};


const char* grade(float score);
void inputData(struct Student *s, int i);
void showData(struct Student s, int i) ;


int main() {
    struct Student s1, s2, s3;

    printf("Enter the details of 3 students :\n");

    inputData(&s1, 0);
    inputData(&s2, 1);
    inputData(&s3, 2);

    showData(s1, 0);
    showData(s2, 1);
    showData(s3, 2);

    return 0;
}

void inputData(struct Student *s, int i) {
    printf("\nStudent %d:\n", i + 1);
    printf("Name: \n");
    scanf(" %[^\n]", s->Name); // อ่านชื่อที่มีช่องว่างโดยไม่ใช้ getchar

    printf("ID: \n");
    scanf("%s", s->ID);

    printf("Scores in Subject 1: \n");
    scanf("%f", &s->ScoreSub1);
    printf("Scores in Subject 2: \n");
    scanf("%f", &s->ScoreSub2);
    printf("Scores in Subject 3: \n");
    scanf("%f", &s->ScoreSub3);
    printf("Scores in Subject 4: \n");
    scanf("%f", &s->ScoreSub4);
    printf("Scores in Subject 5: \n");
    scanf("%f", &s->ScoreSub5);
}

// ฟังก์ชันแสดงข้อมูลและตัดเกรด
void showData(struct Student s, int i) {
    float avg = (s.ScoreSub1 + s.ScoreSub2 + s.ScoreSub3 + s.ScoreSub4 + s.ScoreSub5) / 5.0;

    printf("\nStudent %d:\n", i + 1);
    printf("Name: %s\n", s.Name);
    printf("ID: %s\n", s.ID);
    printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
           s.ScoreSub1, s.ScoreSub2, s.ScoreSub3, s.ScoreSub4, s.ScoreSub5);
    printf("Grades: %s %s %s %s %s\n",
           grade(s.ScoreSub1), grade(s.ScoreSub2), grade(s.ScoreSub3),
           grade(s.ScoreSub4), grade(s.ScoreSub5));
    printf("Average Scores: %.1f\n", avg);
}

const char* grade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}
