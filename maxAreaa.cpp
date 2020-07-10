#include<bits/stdc++.h>
using namespace std;

vector<int> NSL(int arr[],int size)

{
    vector<int> left;
    stack<pair<int,int>>s;
    int pseudoindex=-1;
    for(int i=0;i<size-1;i++)
    {
        if(s.size()==0)
        {
         left.push_back(pseudoindex);
        }
        else if(s.size()>0 && s.top().first<arr[i])
        {
            left.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>arr[i])
        {
            while(s.size()>0 && s.top().first>arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                left.push_back(pseudoindex);
            }
            else{
                left.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});   
    }
    return left; //returns indexes of nearest smaller left
}

vector<int> NSR(int arr[], int size)
{
     vector<int> right;
     stack<pair<int,int>>s1;
     int pseudoindex=7;
    for(int i=size-1;i>0;i--)
    {
        if(s1.size()==0)
        {
            right.push_back(pseudoindex);
        }
        else if(s1.size()>0 && s1.top().first<arr[i])
        {
            right.push_back(s1.top().second);
        }
        else if(s1.size()>0 && s1.top().first>arr[i])
        {
            while(1)
            {
                s1.pop();
            }
            if(s1.size()==0)
            {
                right.push_back(pseudoindex);
            }
            else
            {
                v.push_back(s1.top().second);
            }
            
        }
        s1.push({arr[i],i});
        reverse(v.begin(),v.end());

    }
    return right;  //returns index of nearest smaller to right
}

int findwidth()
{ 
   for(int i=0;i<size-1;i++)
   {
      width[i]=left[i]-right[i]-1;
   }
   return width;
}


int maximum()
{
    int arr[]={5,2,5,4,5,1,6};
    int size=sizeof(arr);
    for(int i=0;i<size;i++)
    {
        int w[i]=findwidth();
    }
    
    for(int i=0;i<size;i++)
    {
        int max=w[0];
        if(max<w[i])
        {
            max=w[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={5,2,5,4,5,1,6};
    int size=sizeof(arr);

    int ans=maximum();
    cout<<ans<<endl;
}