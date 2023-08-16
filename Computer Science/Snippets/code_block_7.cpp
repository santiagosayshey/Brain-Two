int ThrowTheBall::timesThrown(int N, int M, int L)
{
    std::unordered_map<int, int> catches;

    for (int i=0; i<N; i++) {
        catches[i]=0;
    }

    int j=0;
    int passes=0;

    while (catches[j] != M) {
        catches[j]++;
        passes++;
        if (catches[j] % 2 == 0) {
            j = (j - L + N) % N;
        } else {
            j = (j + L) % N;
        }
    }

    return passes;
}
