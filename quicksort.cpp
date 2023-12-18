#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Solution {
public:
    int Partition(vector<int>&nums, int l, int r){
        int pivot = nums[l];
        int i=l;
        int j = r;
        while(i<j){
            do{
            i++;
        }while(nums[i]<=pivot);
        do{
            j--;
        }while(nums[j]>pivot);
        if(i<j){
            swap(nums[i],nums[j]);
        }
        }
        swap(nums[l],nums[j]);
        return j;

    }
    void QuickSort(vector<int>&nums, int l, int r){
        if(l<r){
            int pi = Partition(nums,l,r);
            QuickSort(nums,l,pi-1);
            QuickSort(nums,pi+1,r);
        }
        return;
    }
    vector<int> sortArray(vector<int>& nums) {
         QuickSort(nums,0,nums.size()-1);
         return nums;
    }
};

int main(){
        vector<int> nums = {2,1,3,4};
        Solution ob;
        ob.sortArray(nums);
        for(int i=0;i<nums.size();i++)
            cout << nums[i]<< " ";
        
        return 0;
    }