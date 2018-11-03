//
//  uniqueEmails.cpp


#include <stdio.h>
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        string tempFront;
        string tempBack;
        bool reachedAt = false;
        set<string> emailSet;
        for(int x=0; x < emails.size(); x++)
        {
            tempFront = tempBack = "";
            reachedAt = false;
            for(int y=0; y < emails[x].size(); y++)
            {
                if(!reachedAt && emails[x][y] != '@')
                {
                    if(emails[x][y] == '.')
                        continue;
                    else if(emails[x][y] == '+')
                    {
                        while(emails[x][y]!='@')
                        {
                            y++;
                            reachedAt = true;
                            
                        }
                    }
                }
                else if(emails[x][y] == '@')
                {
                    reachedAt = true;
                    continue;
                }
                else
                {
                    tempBack.push_back(emails[x][y]);
                }
                
            }
            emailSet.insert(tempFront + '@' + tempBack);
        }
        return emailSet.size();
    }
};
