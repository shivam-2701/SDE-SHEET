#include <bits/stdc++.h> 
using namespace std; 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int dup,missing;
	for(int i=0;i<n;i++){
        int curr=arr[i];
        if(curr<0)
            curr*=-1;
        if(arr[curr-1]>0){
            arr[curr-1]*=-1;
        }else{
            dup = curr;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            missing=i+1;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=abs(arr[i]);
        }
    return make_pair(missing,dup);
	
}