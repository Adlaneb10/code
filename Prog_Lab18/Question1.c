/*Design structure templates,
incorporating the use of nested structures to store biographical data about a person1.
Your program must:
a)
Enter data for a person1's firstname, surname, date of birth, height, weight, eye 
colour & country of citizenship
b)
Display the data entered
c)
Copy the 
data and store it in a 2nd person1's record and then modify it
d)
Display the new data for the 2nd person1
Auhtor: Adlane Boulmelh
Date: 26/03/2020
*/
#include <stdio.h>
#include <string.h>

//define structure template list one after the other
struct date
{
    int day;
    int month;
    int year;
};
struct biographical_data
{
    char firstname[21];
    char surname[15];
    struct date DOB;
    int height;
    int weight;
    char eyecolour[7];
    char citizenship[21];

};

int main()
{
    //Call structure
    struct biographical_data person1 = {"Adlane","Boulmelh",25,8,2001,185,71,"Brown","Irish"};
    struct biographical_data person2;
    //struct biographical_data person2;
    printf("Person1 profile\n");
    puts(person1.firstname);
    puts(person1.surname);
    printf("%d/%d/%d\n",person1.DOB.day,person1.DOB.month,person1.DOB.year);
    puts(person1.eyecolour);
    puts(person1.citizenship);
    printf("\n\n");

    printf("Person2 profile\n");

    strcpy(person2.firstname,person1.firstname);
    strcpy(person2.surname,person1.surname);
    person2.DOB.day = person1.DOB.day;
    person2.DOB.month = person1.DOB.month;
    person2.DOB.year = person1.DOB.year;
    strcpy(person2.eyecolour,person1.eyecolour);
    strcpy(person2.citizenship,person1.citizenship);
    person2.citizenship[21] = person1.citizenship[21];
    puts(person2.firstname);
    puts(person2.surname);
    printf("%d/%d/%d\n",person2.DOB.day,person2.DOB.month,person2.DOB.year);
    puts(person2.eyecolour);
    puts(person2.citizenship);

    //modify data in person 2 profile
    person2.DOB.day = 14;
    person2.DOB.month = 10;
    person2.DOB.year = 1969;


    return 0;
}
