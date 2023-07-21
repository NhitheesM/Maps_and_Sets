

#include <bits/stdc++.h> 


vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{

    unordered_map< string,  vector< string>> anagramMap;

    for (auto str : inputStr) {
         string sortedStr = str;
         sort(sortedStr.begin(), sortedStr.end());

        anagramMap[sortedStr].push_back(str);
    }

     vector< vector< string>> groupedAnagrams;
    for (auto pair : anagramMap) {
        //if (pair.second.size() <= n) {
            groupedAnagrams.push_back(pair.second);
        //}
    }

    return groupedAnagrams;


}

