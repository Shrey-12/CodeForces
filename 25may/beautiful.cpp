

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool is_coprime(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a == 1;
}

bool is_beautiful(const vector<int> &arr)
{
    int n = arr.size();
    for (auto i : arr)
    {
        if (i == 1)
            return true;
    }

    if (n < 3)
    {
        return false;
    }

  
    int co_prime1 = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (is_coprime(co_prime1, arr[i]))
        {
    
            co_prime1 = arr[i];
            break;
        }
    }

  
    int num_coprimes = 1; 
    for (int i = 1; i < n; i++)
    {
        if (is_coprime(co_prime1, arr[i]))
        {
            num_coprimes++;
            if (num_coprimes > 2)
            {
                return false;
            }
        }
    }

   
    for (int num : arr)
    {
        if (num != co_prime1 && num % co_prime1 != 0)
        {
          
            bool divisible = false;
            for (int i = 1; i < n; i++)
            {
                if (is_coprime(co_prime1, arr[i]) && arr[i] != co_prime1 && num % arr[i] == 0)
                {
                    divisible = true;
                    break;
                }
            }
            if (!divisible)
            {
                return false; 
            }
        }
    }

    return true; 
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (is_beautiful(arr))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}