int Inchworm::lunchtime(int branch, int rest, int leaf)
{
    std::unordered_map<int, bool> leafLocations;

    for (int i=0; i<branch+1; i++) {
        if (i % leaf == 0) {
            leafLocations[i]=true;
        }
        else {
            leafLocations[i]=false;
        }
    }

    int eaten = 0;

    for (int i=0; i<branch+1; i = i+rest) {
        if (leafLocations[i]) {
            eaten++;
        }
    }

    return eaten;
}
