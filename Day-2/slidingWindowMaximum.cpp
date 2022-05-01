#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v{1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    for (int i = 0; i < v.size()-k+1; i++)
    {
        // cout<<v[i];
        int max = 0;
        
        for (int j = i; j < i+3; j++)
        {
            if(v[j]>max)
            {
                max = v[j];
            }
        }
        cout<<max;
        cout<<"\n";
        
    }
    
    
}