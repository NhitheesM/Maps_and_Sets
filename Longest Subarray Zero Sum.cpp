#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
    std::unordered_map<int, int> sumMap;
    int maxLength = 0;
    int sum = 0;

    for(int i=0;i<arr.size();i++){
      sum+=arr[i];
      if(maxLength==0 && arr[i]==0){
        maxLength=1;
      }
      if(sum==0){
        maxLength=i+1;
      }
      

      if(sumMap.find(sum)!=sumMap.end()){
        maxLength=max(maxLength,i-sumMap[sum]);
      }else{
        sumMap[sum]=i;
      }
    }



  return maxLength;


}