#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>arr;
int n;
cin>>n;
//taking input for inserting values in array
for(int i=0;i<n;i++){
    int c;

    cin>>c;
    arr.push_back(c);
}


//Selection Sort 

for(int i=0;i<n-1;++i){
    int min_idx=i;

    for(int j=i+1;j<n;++j){
        if(arr[min_idx]>arr[j]){
               min_idx=j;
        }
    }
  if(min_idx!=i){
    swap(arr[i],arr[min_idx]);
  }
}

}


