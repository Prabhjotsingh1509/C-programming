// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include<stdio.h>

int main()
{
    int n,roll,marks;
    char name[50];
    FILE *fp;

    fp=fopen("record.txt","w");
    if(fp == NULL)
    {
        printf("Error in Opening the File");
        return 0;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    printf("\nData successfully written to record.txt!\n");

    // --- Reading records from file ---
    fp = fopen("record.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening the file for reading.\n");
        return 0;
    }

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/