#ifndef SQUAREOFDIGITS_H
#define SQUAREOFDIGITS_H

#pragma once

#include <string>
#include <vector>

class SquareOfDigits
{
public:
    SquareOfDigits() {}
    ~SquareOfDigits() {}

    int getMax(std::vector<std::string> data)
    {
        int numRows = data.size();
        int numCols = data[0].size();

        int minDim = std::min(numRows, numCols);

        for (int size = minDim; size>0; size--) {
            for (int row=0; row<=numRows - size; row++) {
                for (int col=0; col<=numCols - size; col++) {
                    if (data[row].at(col) == data[row + size -1].at(col) &&
                        data[row].at(col) == data[row].at(col + size -1) &&
                        data[row].at(col) == data[row + size -1].at(col + size -1)
                    ) {
                        return size*size;
                    }
                }
            }
        }
        return 1;
    }

private:

};

#endif
