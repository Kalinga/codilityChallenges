// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)

    int maxIndex = 0;
    
    vector <bool> intermediate(A.size());
    
    for (unsigned int i = 0; i< A.size(); ++i) {

        if (!intermediate[A[i]]) { // not visited yet
            intermediate[A[i]] = true;
            maxIndex = i; 
        }    
    } 
    
    //cout << "maxIndex" <<maxIndex<<endl;
    return maxIndex;
}
