/* Template nested structures
*/
#include <stdio.h>
#include <string.h>

struct date
{
    int day;
    int month;
    int year;
};

struct person
{
    char firstname[11];
    struct date DOB;

};

int main()
{
    struct person student;
    printf("Enter you first name\n");
    gets(student.firstname);

    printf("Enter your Date of Birth\n");
    //scanf("%d",&student.DOB); DOESNT wORK

//Will  read in only day
    scanf("%d", &student.DOB.day);
    
    scanf("%d", &student.DOB.month);

    scanf("%d", &student.DOB.year);

    printf("%d/%d/%d", student.DOB.day, student.DOB.month, student.DOB.year);
    return 0;
}