#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help()
{
    printf("command                funtion\n");
    printf("  ls         display file or directory\n");
    printf(" mkdir            create directory\n");
    printf("  cp                 copy file\n");
    printf("  cat              show file content\n");
    printf("  rm                delete file\n");
    printf(" pwd           show current directory\n");
    printf(" quit           exit the program\n");
}

void ls()
{
    printf("This is a ls command.");
}

void mkdir()
{
    printf("This is a mkdir command.");
}

void cp()
{
    printf("This is a cp command.");
}

void cat()
{
    printf("This is a cat command.");
}

void rm()
{
    printf("This is a rm command.");
}

void pwd()
{
    printf("This is a pwd command.");
}

void quit()
{
    printf("This is a quit command.\nNow the program is logged out.");
}

int main()
{
    char cmd[256];
    printf("Please input your command:");
    while(1)
    {
        printf("\n");
        scanf("%s",cmd);
        if(strcmp(cmd,"help") == 0)
        {
            help();
        }else if(strcmp(cmd,"ls") == 0)
        {
            ls();
        }else if(strcmp(cmd,"mkdir") == 0)
        {
            mkdir();
        }else if(strcmp(cmd,"cp") == 0)
        {
            cp();
        }else if(strcmp(cmd,"cat") == 0)
        {
            cat();
        }else if(strcmp(cmd,"rm") == 0)
        {
            rm();
        }else if(strcmp(cmd,"pwd") == 0)
        {
            pwd();
        }else if(strcmp(cmd,"quit") == 0)
        {
            quit();
            break;
        }
    }
    return 0;
}
