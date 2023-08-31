#include <stdio.h>
float calculateAverage(int grades[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += grades[i];
    }
    return sum / size;
}


int findHighest(int grades[], int size)
{
    int highest = grades[0];
    for (int i = 1; i < size; i++)
    {
        if (grades[i] > highest)
        {
            highest = grades[i];
        }
    }
    return highest;
}

// Function to find the lowest grade
int findLowest(int grades[], int size)
{
    int lowest = grades[0];
    for (int i = 1; i < size; i++)
    {
        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }
    return lowest;
}

int main()
{
    printf("Welcome to Student Grade Analysis!\n\n");

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int grades[numStudents];
    printf("\nEnter the grades of the students:\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Calculate average grade\n");
        printf("2. Find highest grade\n");
        printf("3. Find lowest grade\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nAverage grade of the class: %.2f\n", calculateAverage(grades, numStudents));
            break;
        case 2:
            printf("\nHighest grade in the class: %d\n", findHighest(grades, numStudents));
            break;
        case 3:
            printf("\nLowest grade in the class: %d\n", findLowest(grades, numStudents));
            break;
        case 4:
            printf("\nThank you for using Student Grade Analysis!\n");
            break;
        default:
            printf("\nInvalid choice. Please select a valid option.\n");
        }
    }
    while (choice != 4);

    return 0;
}
