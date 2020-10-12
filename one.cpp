#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int p;
     cin>>p;
     while(p--)
     {
	multimap<int,int> mp;
    int n;
    cin>>n;
    int arr[n];
    
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int count;	    
for (int i =0;i<n;i++)
{
    count=0;
    if(mp.find(arr[i])==mp.end())
    {   count++;
        mp.insert({arr[i],count});
    
    }
    else
    {   
        auto itr=mp.find(arr[i]);
        count=itr->second +1;
        mp.erase(arr[i]);
        mp.insert({arr[i],count});
    } 

 }
 
 while(1)
 {
auto itr=mp.begin();
 int max=itr->second;
 int max1=itr->first;
 for(;itr!=mp.end();itr++)
 {
     if(itr->second > max)
     {
     max=itr->second;
     max1=itr->first;
     }
     
 }
 while(max--)
  cout<<max1<<" ";
    mp.erase(max1);
 if(mp.size()==0)
     break;


 }
cout<<endl;
     }
 }
