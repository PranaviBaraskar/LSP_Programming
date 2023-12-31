
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    PROBLEM STATEMENT : 1. Write a program which accept file name from user and open that file.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    DESCRIPTION       :   Open the file given by user
//    INPUT             :   File Name.
//    OUTPUT            :   Opened Regular File.
//    AUTHOR            :   Pranavi Ghanshyaam Baraskar
//    DATE              :   13.7.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     MAIN FUNCTION
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Please enter valid Parametes..\n");
        return -1;
    }

    int fd = 0;
    fd = open(argv[1],O_RDONLY);
    if(fd == 3)
    {
        printf("Successfully opened..\n");
    }
    else if(fd == -1)
    {
        printf("Unable to open Regular file..\n");
        return -1;
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Command :   gcc Assignment1_1.c -o Assignment1_1
//                  ./Assignment1_1 Demo.txt
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


//--------------------------------------------------* END_OF_THE_PROGRAM *-------------------------------------------------//