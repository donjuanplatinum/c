#include <stdio.h>
void printargv(int argc,char *argv[]);

int main(int argc,char *argv[])
{
    printargv(argc,argv);
    return 0;
}

void printargv(int argc,char *argv[])
{
    for(int i=1;i<argc;i++)
    {
        printf("%s\n", argv[i]);
    }

}