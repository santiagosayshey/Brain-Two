handle_sigint() {
	// BUT WHAT HAPPENS HERE???
	signal(SIGQUIT, SIG_IGN);
	// stuff
	signal(SIGQUIT, prev_Handler);
}
