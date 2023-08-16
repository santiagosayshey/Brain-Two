signal(SIGINT, handler); 
signal(SIGFPE, handler); 
signal(SIGPIPE, handler); 
signal(SIGSTOP, handler); 

void handler(int in_signal) 
{ 
	if (in_signal == SIGINT) {} 
	if (in_signal == SIGPIPE) {} 
	... 
}
