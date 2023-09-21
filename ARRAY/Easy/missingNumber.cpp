#include<bits/stdc++.h>
using namespace std;

//* Approach - 1 : Using Sorting
int missingNumber(vector<int>& nums) {
  sort(nums.begin(), nums.end());

  int k = 0, i = 0;
  while(k < nums.size()) {
      if(nums[i] != k)
          return k;
      i++;
      k++;
  }
  return k;
}

//* Approach - 2 : Using Mathematics
int missingNumber(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();

    for(int ele : nums) 
        sum += ele;
    
    return (n*(n+1)/2) - (sum);
}
  