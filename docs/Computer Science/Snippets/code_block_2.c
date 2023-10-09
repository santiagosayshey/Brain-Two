#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int num)
{
	write(STDOUT_FILENO, "Thwarted!\n", 13);
}

int main() {
	signal(SIGINT, handler);
	while (1)
	{
		printf("Do Nothing\n");
	}
