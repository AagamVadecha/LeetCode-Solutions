#include <stdio.h>

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int k=0;
        for(int x=0; x<J.length(); x++)
        {
            for(int y=0; y<S.length(); y++)
            {
                if(J.at(x) == S.at(y))
                    k++;
            }
        }
        return k;
    }
};
