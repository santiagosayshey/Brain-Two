while (TRUE)
{
    read_command(command, params);
    pid= fork();
    
    if (pid < 0) // fork failed
    {
	    handle_error();
    }

    else if (pid> 0) // parent process, waits for child to finish
    {
	    wait(NULL);
    }

    else // child process, executes command and finishes
    {
	    execvp(command, params);
    }
}
