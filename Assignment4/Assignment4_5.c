
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    PROBLEM STATEMENT :   5. Write a program which accept file name and position 
//                              from user and read 20 bytes from that position.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    DESCRIPTION       :   Read data from where user say.!!
//    INPUT             :   File name, From where to read (bytes).
//    OUTPUT            :   Read file from given bytes
//    AUTHOR            :   Pranavi Ghanshyaam Baraskar
//    DATE              :   17.7.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     MAIN FUNCTION
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Inavlid Arguments \n");
        return -1;
    }

    int fd = 0;
    char Buffer[20] = {'\0'};

    fd = open(argv[1],O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    lseek(fd,atoi(argv[2]),0);
    read(fd,Buffer,20);

    printf("-------------------------------------------------------------------------------\n");
    printf("Data from file %s : \n",argv[1]);
    printf("-------------------------------------------------------------------------------\n");

    write(1,Buffer,20);

    printf("\n-------------------------------------------------------------------------------\n");
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Command :   gcc Assignment4_5.c -o Assignment4_5
//                  ./Assignment4_5 Hello.txt (Bytes_From_you_Want_read)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


//--------------------------------------------------* END_OF_THE_PROGRAM *-------------------------------------------------//