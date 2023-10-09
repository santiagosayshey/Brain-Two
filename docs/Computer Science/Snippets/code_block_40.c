int main()
{
	int id;
	id = fork();
	
	if (id == 0);
	{
		// Child
		{
			close(1);
			fd = creat (“ls_output”, 0644);
			execlp(“ls”, “ls”, NULL);
			perror(“execlp”);
			exit(1);
		}
	}
	else if (id != 0)
	{
		// Parent
		wait (NULL)
	}
}
