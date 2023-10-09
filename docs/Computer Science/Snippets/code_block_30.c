int weirdCount() {
	static int not_local = 0;
	not_local++;
	return not_local;
}

int main() {
	int a = weirdCount();
	int b = weirdCount();
	// print everything
}
