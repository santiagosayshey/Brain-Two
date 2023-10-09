FILE *fp = fopen("file.txt", "w+");
if (fp == NULL) {
    printf("Failed to open file\n");
    return 1;
}

fputs("Hello, World!", fp);

fseek(fp, 0, SEEK_SET); // Reset the file position indicator to the beginning

char buf[50];
fgets(buf, 50, fp);
printf("%s\n", buf);

fclose(fp);
