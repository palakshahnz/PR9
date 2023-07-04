#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

float calculatePercentage(int totalMarks) {
    return (float)totalMarks / 300 * 100;
}

int main() {
    struct Student students[5];
    int i;

    for ( i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i+1);
        printf("Roll no => ");
        scanf("%d", &students[i].rollNo);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
    }

    printf("\nOutput:\n");

    for (i = 0; i < 5; i++) {
        printf("%s (%d)\n", students[i].name, students[i].rollNo);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);

        int totalMarks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        printf("Total => %d/300\n", totalMarks);

        float percentage = calculatePercentage(totalMarks);
        printf("Percent => %.2f%%\n\n", percentage);
    }

    return 0;
}

