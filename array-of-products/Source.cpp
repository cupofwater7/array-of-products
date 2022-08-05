#include <vector>
#include <iostream>
using namespace std;

vector<int> arrayOfProducts(vector<int> array);

int main()
{
    vector<int> result = arrayOfProducts({ 5, 1, 4, 2 });

    for (int number : result)
    {
        cout << number << " ";
    }
    return 0;
}

vector<int> arrayOfProducts(vector<int> array) {
    // Write your code here.
    vector<int> result = {};

    for (int i = 0; i < array.size(); i++)
    {
        int idx = 0;
        int soms = 1;
        while (idx < array.size())
        {
            if (idx != i)
            {
                soms *= array[idx];
            }



            idx++;
        }
        result.push_back(soms);

    }

    return result;
}
