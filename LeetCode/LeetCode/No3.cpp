//
//  No3.cpp
//  LeetCode
//
//  Created by 姚启灏 on 2019/12/3.
//  Copyright © 2019 姚启灏. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <map>
#include <vector>
using namespace std;

inline int lengthOfLongestSubstring(string s) {
    vector<char> myvec;
    int longestLength = 0;
    for(int i = 0; i < s.length(); i++)
    {
        auto it = std::find(myvec.begin(), myvec.end(), s[i]);
        if(it != myvec.end())
        {
            if(longestLength < myvec.size())
                longestLength = myvec.size();
            it++;
            myvec.erase(myvec.begin(), it);
        }

        myvec.push_back(s[i]);
    }

    if(longestLength < myvec.size())
        longestLength = myvec.size();

    return longestLength;
}
