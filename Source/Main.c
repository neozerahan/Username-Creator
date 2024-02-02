#include <stdio.h>
#include <stdlib.h>

#include "..\Header\Define.h"
#include "..\Header\Helper.h"

/* 
A program that helps users create a user-name with max number of characters. It handles below user-cases:
1. User-name cannot have more than max amount of characters.
2. User-name cannot have any space(s).
3. Username cannot have any special character(s).
4. Username should not have less than 4 characters.
5. User-name should have atleast 3 alphabetical characters.
6. Concatenate @email.com at the end of the user-name.
*/


int main(void)
{
    char *userName = NULL;                  //The user-name of the user...
    int usrnamelength = 0;                  //The lenght of the user-name inputted by the user...
    
    int canContinue = FALSE;                //bool to check if the while-loop can continue...
    int hasSpace = FALSE;                   //bool to check if the user-name has space...
    
    int hasSpecialChar = FALSE;             //bool to check if special character is available...
    int hasMinChar = FALSE;                 //bool to check if there are minimum characters in the user-name...
    int hasChar = FALSE;                    //bool to check if there are characters...

    AllocateCharMemory(&userName, USERNAME_CHAR_LIMIT);

    system("clear");
    while(canContinue == FALSE)
    {
        printf("\t\t-----CREATE USERNAME----\n");
        printf("Note: max character: %d, no spaces and special characters allowed\n", USERNAME_CHAR_LIMIT);
        printf("Input User-name : ");
        fgets(userName, FGETS_BUFFER_SIZE, stdin);

        GetUserNameLength(userName, &usrnamelength);
        
        CheckIfSpaceBetweenUserName(userName, &hasSpace);

        CheckIfSpecialChar(userName, &hasSpecialChar);

        CheckMinCharInUserName(usrnamelength, &hasMinChar);

        CheckMinCharAlphabet(userName, &hasChar);

        //If the minimum character requirements are not met in the user-name, show error...
        if(hasMinChar == FALSE)
        {
            system("clear");
            PrintErrorMessage(ERRORMSG_MIN_CHAR);
        }

        //If there are no characters in the user-name, show error...
        else if(hasChar == FALSE)
        {
            PrintErrorMessage(ERRORMSG_NO_CHAR);
        }

        //If there is a special character in the user-name, show error...
        else if(hasSpecialChar == TRUE)
        {
            system("clear");
            PrintErrorMessage(ERRORMSG_HAS_SPECIAL_CHAR);
            if(usrnamelength >= USERNAME_LENGTH_WITH_NULL_TERMINATOR)
            {
                ClearInputBuffer(userName);
            }
        }

        //If there is a space in the user-name, show error...
        else if (hasSpace == TRUE)
        {
            system("clear");
            PrintErrorMessage(ERRORMSG_HAS_SPACE);
            if(usrnamelength >= USERNAME_LENGTH_WITH_NULL_TERMINATOR)
            {
                ClearInputBuffer(userName);
            }   
        }

        //If user-name is greater than the user-name character limit, show error...
        else if(usrnamelength > USERNAME_CHAR_LIMIT)
        {
            system("clear");
            PrintErrorMessage(ERRORMSG_EXCEED_LIMIT);
            ClearInputBuffer(userName);  
        }

        //Assign user-name and print it. Also, free the memory...
        else
        {
            RemoveNewLine(userName);
            AppendEmailAddress(userName,usrnamelength);
            printf("SUCCESS! Your username is: %s\n", userName);
            free(userName);
            return 0;
        }
    }
    return 0;
}