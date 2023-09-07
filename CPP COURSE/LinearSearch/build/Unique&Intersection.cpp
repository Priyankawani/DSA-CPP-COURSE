#include<iostream>
#include<vector>
using namespace std;

void UnionArray(int a[], int sizea, int b[], int sizeb)
{
    vector<int> ans;
    for(int i=0; i<sizea; i++)
    {
        ans.push_back(a[i]);
    }
    
    for(int i=0; i<sizeb; i++)
    {
        ans.push_back(b[i]);
    }

    for(int i=0; i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}

void Intersection(int a[], int b[], int sizea, int sizeb)
{
    vector<int> intersection;
    for(int i=0; i<sizea; i++)
    {
        for(int j=0; j<sizeb; j++)
        {
            if(a[i] == b[j])
            {
                intersection.push_back(b[j]);
                //marking the element so that its not checked again
                b[j] = -1;
            }
        }
    }
    for(int i=0; i<intersection.size();i++)
    {
        cout<<intersection[i]<<" ";
    }
}
int main()
{
    int a[] = {1,2,3,4,5,6};
    int b[] = {4,5,6,7};
    int sizea = 6;
    int sizeb = 4;

    UnionArray(a, sizea, b, sizeb);
    cout<<endl;
    Intersection(a, b, sizea, sizeb);

}