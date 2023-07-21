#include<bits/stdc++.h>
char firstNonRepeatingCharacter(string str) {
    unordered_map<char, int> countMap;
    
    // Count the occurrences of each character in the string
    for (char ch : str) {
        countMap[ch]++;
    }
    
    // Find the first non-repeating character
    for (char ch : str) {
        if (countMap[ch] == 1) {
            return ch;
        }
    }
    
    // If no non-repeating character found, return the first character
    return str[0];
}