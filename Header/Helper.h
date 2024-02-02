#ifndef HELPER_H
#define HELPER_H

void ClearInputBuffer(char *word);
void RemoveNewLine(char *word);
void GetUserNameLength(char * userName, int *length);
void CheckIfSpaceBetweenUserName(char * userName, int *hasSpace);
void AllocateCharMemory(char **userName, int size);
void PrintErrorMessage(char * errorMessage);
void CheckIfSpecialChar(char * userName,  int *hasSpecialChar);
void CheckMinCharInUserName(const int userNameLength, int *hasMinChar);
void CheckMinCharAlphabet(const char * userName, int *hasChar);
void AppendEmailAddress(char *userName, int userNameLength);

#endif