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
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i] >> c[i];
            
            if (p[i] >= diffPage)
            {
                if (c[i] <= k)
                {
                    cout << "LuckyChef" << endl;
                }
                else
                {
                    counter += 1;
                    continue;
                }
            }
            if (p[i] < diffPage)
            {
            	
                if (c[i] <= k)
                {
                
                    diffPage = diffPage - p[i];
                    //p[i] = p[i] - diffPage;
                    k = k - c[i];
                    counter+=1;
                }
                else{
                	counter +=1;
                }
            }
        }
       
        if(counter >=n){
            cout<<"UnluckyChef"<<endl;
        }
    }
}


