#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int findCandidate( int a[], int size){
    int maj_index=0;
    int count =1;
    for(int i=1;i<size;i++){
        if(a[maj_index]==a[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            maj_index=i;
            count++;
        }
    }
    return a[maj_index];
}
   bool isMajority(int a[],int size, int cand){
    int count=0;
    for(int i=0;i<size;i++)
        if(a[i]==cand)
            count++;
        
        if(count>size/2)
            return 1;
        
        else
            return 0;
        
    
}
void printMajority(int a[], int size){
    int cand = findCandidate(a,size);
    if(isMajority(a,size,cand))
    cout<<" "<<cand<<" ";
    else{
        cout<<"No Majority Element";
    }
}

int main()
{
    int a[] = { 1, 3, 3, 3, 2,3 };
    int size = (sizeof(a)) / sizeof(a[0]);
 
    // Function calling
    printMajority(a, size);
 
    return 0;
}
//moore's voting algorithm
