// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <bitset>

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    bitset<64> binaryBits(N);
    bool rightBoundary = false;
    int tempBinaryGap = 0;
    int binaryGap = 0;
    
    for (unsigned int i = 0; i < 64; ++i) {
        if (binaryBits[i] == 1 ) {
            if (rightBoundary) {
                if (binaryGap < tempBinaryGap)
                    binaryGap = tempBinaryGap;
                tempBinaryGap = 0;
            } else {     
                rightBoundary = true;
            }    
        } else if (rightBoundary) {
            ++tempBinaryGap;
        }        
    }
    
    //cout <<"binaryGap"<<binaryGap<<endl;
    return binaryGap;
}
