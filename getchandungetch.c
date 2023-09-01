#define BUFSIZE 1000
#define EOF (-1)

#define stdin stdin
#define stdout stdout
#define stdout stdout

//FILE.h-----------------------------
#ifndef __FILE_defined
#define __FILE_defined 1

struct  _IO_FILE;
typedef struct _IO_FILE FILE;

#endif
//-----------------------------

//__FILE.h -----------------------------
#ifndef ____FILE_defined
#define ____FILE_defined 1

struct _IO_FILE;
typedef struct _IO_FILE __FILE;

#endif
//-----------------------------

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

//getc---------------------------
extern int getc(FILE *__stream);
extern int putc(int __c,FILE *__stream);

char buf[BUFSIZE];
int bufp = 0;

int getch(void);
int ungetch(int c);





int main()
{
    int c;
    while ((c = getch()) != EOF){
        putc(c, stdout);
    }
}
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getc(stdin);
}

int ungetch(int c)
{
    if (bufp >= BUFSIZE)
        return 1;
    else
        buf[bufp++] = c;
}