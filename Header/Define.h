#ifndef DEFINE_H
#define DEFINE_H

#define EMAIL_ADDRESS "@ogreheadstudio.com"

#define SPACE_FOR_NULLTERMINATOR 1
#define SPACE_FOR_NEWLINE 1
#define USERNAME_CHAR_LIMIT 10

#define FGETS_BUFFER_SIZE                       (USERNAME_CHAR_LIMIT + SPACE_FOR_NEWLINE + SPACE_FOR_NULLTERMINATOR)
#define USERNAME_LENGTH_WITH_NULL_TERMINATOR    (USERNAME_CHAR_LIMIT + 1)

#define TRUE    1
#define FALSE   0

#define ERRORMSG_HAS_SPACE          "ERROR: Username contains spaces. Please try again!"
#define ERRORMSG_EXCEED_LIMIT       "ERROR: Username exceeds character limit. Please try again!"
#define ERRORMSG_HAS_SPECIAL_CHAR   "ERROR: Username contains special characters. Please try again!"
#define ERRORMSG_MIN_CHAR           "ERROR: User-name must have atleast 4 or more characters. Please try again!"
#define ERRORMSG_NO_CHAR            "ERROR: User-name must contain atleast 3 Alphabets. Please try again!"

#define MINIMUM_CHAR_USERNAME       4
#define MINIMUM_ALPHABET_USERNAME   3

#define CHECK_ALPHABETS_IN_ASCII        (*userName >= 65 && *userName <= 90) || (*userName >= 97 && *userName <= 122)
#define CHECK_SPECIAL_CHARS_IN_ASCII    ((*userName >= 33 && *userName <= 47) || (*userName >= 58 && *userName <= 64))

#endif