#include <stdio.h> // For writing
#include <fcntrl.h> // For <we’ll see>

int main()
{
	int fd; // This will be important later
	char line[100]; // Somewhere to store things
	
	fgets(line, 100, stdin);
	printf(“%s”, line); // Read and print
	
	fgets(line, 100, stdin);
	printf(“%s”, line);
	
	fgets(line, 100, stdin);
	printf(“%s”, line);

	// stdin just disappeared
	close (0);

	fd = open(“<a path>”, 0_RDONLY); // <= This is a flag

	// Die gracefully if file doesn’t exist
	if (fd != 0)
	{
		fprintf(stderr, “Could not open data as fd 0\n”);
		exit (1);
	}
	
	fgets(line, 100, stdin);
	printf(“%s”, line); // Read and print x3
	
	fgets(line, 100, stdin);
	printf(“%s”, line);
	
	fgets(line, 100, stdin);
	printf(“%s”, line);
	
	return 0;
}
