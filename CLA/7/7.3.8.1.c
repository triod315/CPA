#include <stdio.h>
#include <string.h>
#include <io.h>
#include <stdlib.h>

#define MAXCHAR 1000
int main()
{

    char* source = "file1.txt";
    char* destination = "dest1.txt";
    FILE* sourceFile;
    FILE* destinationFile;
    sourceFile = fopen(source, "r");
    destinationFile = fopen(destination, "w");
    if (sourceFile == NULL || destinationFile == NULL)
        printf("Error opening a file\n");
    else
    {
        char str[MAXCHAR];
        while (fgets(str, MAXCHAR, sourceFile) != NULL)
        {
            fprintf(destinationFile, str);
        }
        printf("All done successfully");
    }
     fclose(sourceFile);
     fclose(destinationFile)

    

    return 0;
}
