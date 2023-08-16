#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <time.h> // Add this header to use clock()

#define BUFFERSIZE 100
#define COPYMODE 0644

void errExit(char*, char*);

  
int main(int argC, char* argV[]) // Change return type to int
{
    int srcFd;
    int dstFd;
    int charCnt;
    char buf[BUFFERSIZE];
    
    /* Check args */
    if (argC != 3)
    {
        fprintf(stderr, "usage: %s source destination\n", argV[0]);
        exit(1);
    }

    /* Open the files */
    srcFd = open(argV[1], O_RDONLY);
    if (srcFd == -1)
    {
        errExit("Cannot open ", argV[1]);
    }

    dstFd = creat(argV[2], COPYMODE);
    
    if (dstFd == -1)
    {
        errExit("Cannot create ", argV[2]);
    }

    clock_t start = clock(); // Record the start time

    /* Copy the data */
    while ((charCnt = read(srcFd, buf, BUFFERSIZE)) > 0)
    {
        if (write(dstFd, buf, charCnt) != charCnt)
        {
            errExit("Write error to ", argV[2]);
        }
    }

    if (charCnt == -1)
    {
        errExit("Read error from ", argV[1]);
    }

    clock_t end = clock(); // Record the end time

    /* Close files */
    if (close(srcFd) == -1 || close(dstFd) == -1)
    {
        errExit("Error closing files", "");
    }
  
    // Calculate and display the time taken in seconds
    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to copy the file: %f seconds\n", duration);

    return 0; // Add return statement
}

void errExit(char *s1, char *s2)
{
    fprintf(stderr, "Error: %s ", s1);
    perror(s2);
    exit(1);
}
