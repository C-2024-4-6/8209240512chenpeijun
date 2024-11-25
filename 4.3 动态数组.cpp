#include <iostream>
using namespace std;
void sortpa(int x[], int len) 
{
    for (int i = 0; i < len - 1; i++) 
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int len;
    cin >> len;
    int* pa = new int[len];
    for (int i = 0; i < len; i++)
        cin >> pa[i];
    sortpa(pa, len);
    for (int i = 0; i < len; i++)
        cout << *(pa+i) << " ";
    cout << endl;
    delete[] pa; 
    return 0;
}
