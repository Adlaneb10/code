/* Labtest 2 *(array_name+i)
char barack[]={‘Y’,‘E’,‘S‘,‘ ’,’W’,‘E’,‘ ’,‘C‘,‘A’,‘N’};
1. Copy	the	contents	of	the	barack array	into	a	second	array	called	
michelle
2. Replace	all	the	blank	elements	in	the	michelle array	with	the	underline	
character	‘_’.
3. Display the contents of the michelle array to standard output (i.e., the
screen).
//USE ONLY POINTER NOTATION

Author: Adlane Boulmelh (C19367031)
Compiler: MinGW
Operating Systems: Windows 10
Date: 02/12/2019 */

 #include <stdio.h>
 #define SIZE 10

 int main()
 {//Start main
    
    char barack[]={'Y','E','S',' ','W','E',' ','C','A','N'};
    
    char michelle[SIZE];
    
    int i;

    //Part 1
    //Copying contents of barack array to michelle using a for loop
    for(i=0;i<SIZE;i++)
    {
    //Assignment operation 
     *(michelle+i) = *(barack+i);
    
    }
    
    //Part 2
    //Adding underline to spaces
    *(michelle+3) = '_';
    *(michelle+6) = '_';

    //Part 3
    //For loop to print out contents of array Michelle
    for(i=0;i<SIZE;i++)
    {
       //Print contents of michelle array
        printf("%c", *(michelle+i));
    
    }

//to keep cmd window open
    getchar();
    return 0;

 }//End main