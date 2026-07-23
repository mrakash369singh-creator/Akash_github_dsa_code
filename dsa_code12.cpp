//------------------------pointer-----------------------------------
#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> &arr,int n,int m, int maxAllowedpages){
    int students=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedpages){
            return false;
        }
        if(pages + arr[i <=maxAllowedpages]){
            pages+=arr[i];
        }else{
            students++;
            pages=arr[i];
        }
    }
    return students >m ? false :true;
}

int allocatebook(vector<int> &arr, int n,int m){
    int ans;
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=0, end=sum;
    while(st<=end){
        int mid=st + (end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;

        }else{
            st=mid+1;

        }

    }
    return ans;
}


int main(){
    // vector<int> arr={15,17,20};
    // int n=4, m=2;
    // cout<<allocatebook(arr,n,m)<<endl;
    // return 0;
    int a=4;
    // int* ptr= &a;
    // int** ptr2=&ptr;

    cout<<addressof(a)<<endl;
    cout<<&a<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;

   // int* a=NULL;
    cout<<a;

    
    
    int arr[]={ 10,20,30,40};
   // int* ptr=arr;
    // cout<<*(ptr+1)<<endl;
    // cout<<*(ptr+3)<<endl;
    //ptr++;
    //cout<<*(ptr)<<endl;
//---------------------------binery search-----------------



}

