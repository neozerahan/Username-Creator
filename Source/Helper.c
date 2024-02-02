#include<stdio.h>
#include<stdlib.h>

#include "..\Header\Helper.h"
#include "..\Header\Define.h"

//Clear buffer until a new-line character is found...
void ClearInputBuffer(char *word)
{
    
    while ( getchar() != '\n'){}
    return;
}

//Remove new-line and inserts a null terminator...
void RemoveNewLine(char *word)
{
    while(*(word))
    {
        if (*(word) == '\n')
        {
            *(word) = '\0';
            break;
        }
        word++;
    }
}

//Calculate the length of the user-name...
void GetUserNameLength(char * userName, int *length)
{
    *length = 0;
    while(*(userName) != '\n' && *(userName) != '\0')
    {
        (*length)++;
        userName++;
    }
    return;
}

//Check if there are is any space in the user-name. Assign the bool accordingly...
void CheckIfSpaceBetweenUserName(char * userName, int *hasSpace)
{
    *hasSpace = FALSE;
    while(*(userName))
    {
        if (*(userName) == ' ')
        {
            *hasSpace = TRUE;
            return;
        }
        userName++;
    }
    return;
}

//Allocate memory for the user-name...
void AllocateCharMemory(char **userName, int size)
{
    *userName = (char *) malloc((size + 1) * sizeof(char));
    if(*userName == NULL)
    {
        printf("Error: Memory allocation error!");
        return;
    }
    return;
}

//Print the error message...
void PrintErrorMessage(char * errorMessage)
{
    printf("\n");
    printf("%s\n", errorMessage);
    printf("\n");
    return;
}

//Checks if there are any special character in the user-name...
void CheckIfSpecialChar(char *userName, int *hasSpecialChar)
{
    *hasSpecialChar = FALSE;
    while(*userName)
    {
        if(CHECK_SPECIAL_CHARS_IN_ASCII)
        {
            *hasSpecialChar = TRUE;
            break;
        }
        userName++;
    }
    return;
}

//Check if minimum 4 characters are in the user-name...
void CheckMinCharInUserName(const int userNameLength, int *hasMinChar)
{
    *hasMinChar = FALSE;
    if (userNameLength >= MINIMUM_CHAR_USERNAME)
    {
        *hasMinChar = TRUE;
        return;
    }
    return;
}

//Check if there are character in the user-name...
void CheckMinCharAlphabet(const char *userName, int *hasChar)
{
    int charCount = 0;
    *hasChar = FALSE;

    while(*userName)
    {
        if (CHECK_ALPHABETS_IN_ASCII)
        {
            charCount++;

            //if there are 3 or more character in the user-name...
            if(charCount >= MINIMUM_ALPHABET_USERNAME)
            {
                *hasChar = TRUE;
                break;
            }
        }
        else
        {
            *hasChar = FALSE;
        }

        userName++;
    }
}

//Append the email address to the user-name...
void AppendEmailAddress(char *userName, int userNameLength)
{
    char *emailAddress = EMAIL_ADDRESS;
    int emailAddressLength = 0;
    char *fullUserName = NULL;

    GetUserNameLength(emailAddress, &emailAddressLength);

    //re-allocates memory for storing the full user name with email address... 
    fullUserName = (char *)realloc(userName, (userNameLength + emailAddressLength + 1) * sizeof(char));
    int i = 0;
    while(*userName)
    {
        *(fullUserName + i) = *userName++;
        i++;
    }
    while(*emailAddress)
    {
        *(fullUserName + i) = *emailAddress++;
        i++;
    }
    *(fullUserName+i) = '\0';
    return;
}