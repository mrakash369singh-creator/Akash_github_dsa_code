//----------------------------------broot stope approach------------->

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=7;
    int maxsum=INT_MIN;
    int arr[7]={3,-4,5,4,-1,7,-8};
    for(int str=0;str<n;str++){
        int currsum=0;
        for(int end=str;end<n;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);

            
        }
        
    }
    cout<<"max subarray sum "<<maxsum;
    return 0;

}