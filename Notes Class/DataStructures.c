/*
Define a structure template
*/
#include <stdio.h>
#include <string.h>

#define SIZE 5
//Structure templates list one after the other in the same place.
struct student_rec
{
    char firstname[11]; // Structure members
    char surname[21];
    int ID;
    int results[5]; //}

};

//function signatures

int main()
{
    int i;
    int *ptr;
    //Make two variables of student_rec structure
    //Variablename_structure_member
    struct student_rec stu1;
    //declare structure and initialise on same line
    struct student_rec stu2 = {"Adlane","Boulmelh",12348,15,48,49,58,99};
    stu1.ID = 1234;
    //strcpy(stu1.firstname, "Joe");
    //strcpy(stu1.surname, "Blogs");
/*or
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &stu1.*(results + i)); or results[i]
    }*/

    printf("Enter stu1 firstname\n");
    gets(stu1.firstname);//Or scanf("%s", stu1.firstname);
    printf("Enter stu1 second name\n");
    gets(stu2.firstname);
    
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &stu1.results[i]);
    }//End for
    //Enter stu2 data
    //stu2.ID = 12345;
    //strcpy(stu2.firstname, "Joe");
    //strcpy(stu2.surname, "Blogs");

    //For pointers
    /*struct student_rec *ptr;
    ptr = &stu1; //To store address location of stu1 in pointer
    printf("%s",(*ptr).firstname);
    
    */
    
    return 0;
}