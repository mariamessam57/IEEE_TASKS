#include <stdio.h>

int marks_summation(int marks[], int index, int number_of_students, char gender);

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);

    int marks[number_of_students];
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    scanf(" %c", &gender);

    int start_index = (gender == 'b') ? 0 : 1;
    printf("%d\n", marks_summation(marks, start_index, number_of_students, gender));

    return 0;
}

int marks_summation(int marks[], int index, int number_of_students, char gender) {
    if (index >= number_of_students) {
        return 0;
    }
    return marks[index] + marks_summation(marks, index + 2, number_of_students, gender);
}

