//
//  To Lower Case.cpp
//  


class Solution {
public:
    string toLowerCase(string str) {
        string x = "";
        for(int y=0; y<str.size(); y++)
        {
            x += tolower(str.at(y));
        }
        return x;
    }
};
