#include <iostream>
#include <math.h>
using namespace std;

// 1. Reversed the integer.
int reverse(int x) {
        int long rev = 0;
        int digit;

        while(x)
        {
            digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        }

        if(rev > INT32_MAX || rev < INT32_MIN)
        {
            return 0;
        }
        return rev;
    }

// 2. Complements of Base 10 integer.
int bitwiseComplement(int n)
{
    int m = n;
    int mask = 0;
    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}

// 3. Power of two
bool isPowerOfTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // leetcode problems in this lectures:
    // 1. Reversed the integer.
    cout<<"The reversed integer is: "<<reverse(123)<<endl;
    // 2. Complements of Base 10 integer.
    cout << "The answer is: " << bitwiseComplement(5)<<endl;
    // 3. Power of two
    cout << "The power is: " << isPowerOfTwo(8)<<endl;
}