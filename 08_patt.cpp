
#include <iostream>
using namespace std;
void pattern( int n)
{
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
          cout<< i<<" ";
      }
      cout<<endl;
      
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