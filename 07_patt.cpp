
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
           if(j<=n-i)
           {
               cout<<" ";
           }
           else{
               cout<<"*";
           }
        }
        cout << endl;
    }
}
int main()
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;
    pattern(size);
    return 0;
}