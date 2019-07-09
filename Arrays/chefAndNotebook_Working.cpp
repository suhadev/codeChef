#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        
        int p[n], c[n];
        int diffPage = x - y;
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i] >> c[i];
        }
        for(int i=0;i<n;i++){
        	if (p[i] >= diffPage && c[i]<=k)
            {
                
                counter+=1;
                break;
   
            }
        }
            
        
       
        cout<<(counter?"LuckyChef":"UnluckyChef")<<endl;
    }
}