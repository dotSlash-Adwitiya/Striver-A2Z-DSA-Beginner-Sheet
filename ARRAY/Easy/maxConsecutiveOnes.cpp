#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
  int maxi = -1;
  int currCnt = 0;

  for(int &ele : nums ){
      if(ele == 1)
          currCnt++;
      else {
          maxi = max(maxi, currCnt);
          currCnt = 0;
      } 
  }

  return max(maxi, currCnt);
}
