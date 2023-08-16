int StreetParking::freeParks(std::string street)
{
    unordered_map<int, bool> spots;
    for (int i=0; i<street.size(); i++) {
        if (street[i] == 'D' || street[i] == 'B' || street[i] == 'S') {
            spots[i]=false;
        } else {
            spots[i]=true;
        }

        if (i < street.size()-1 && street[i+1] == 'B') {
            spots[i]=false;
        }
        if (i < street.size()-2 && street[i+2] == 'B') {
            spots[i]=false;
        }
        if (i < street.size()-1 && street[i+1] == 'S') {
            spots[i]=false;
        }
        if (i > 0 && street[i-1] == 'S') {
            spots[i]=false;
        }

    }
    int parkingSpots = 0;
    for (int i=0; i<street.size(); i++) {
        if (spots[i]) {
            parkingSpots++;
        }
    }

    return parkingSpots;
}
