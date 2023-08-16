int main()
{
	// Setup
	char * commands[2]; // Child Commands
	commands[0] = “ls”;
	commands[1] = NULL;
	
	char * commands[2]; // Parent Commands
	commands2[0] = “wc”;
	commands2[1] = NULL;
	
	char test_buffer[100]; // For printing
	
	// Fork and Pipes
	int my_pipe[2]; // pipe
	if (pipe(my_pipe) == -1) 
		perror(“Cannot create pipe\n”);
	
	pid_t my_pid; // Fork
	my_pid = fork();

	// Error
	if (my_pid < 0) 
		printf(“Failed Fork\n”);
	
	
	// Parent
	if (my_pid > 0) {
		close(my_pipe[1]);
		dup2(my_pipe[0], STDIN_FILENO);
		close(my_pipe[0]);
		wait(NULL); // wait for child
		execvp(“wc”, commands2);
	}
	
	// Child
	else // I.e. my_pid == 0
	{
		close(my_pipe[0]);
		dup2(my_pipe[1], STDOUT_FILENO);
		close(my_pipe[1]);
		execvp(“ls”, commands);
	}
}
