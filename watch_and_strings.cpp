#include <iostream>
#include <algorithm>

void swap(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}

// int count_r(int a)
// {
//     int res = 0;
//     if (a > 6)
//         res = 12 - a;
//     else
//         res = a;
//     return res;
// }

int main()
{
    int n,a,b,c,d;
    std::cin >> n;
    int* yn = new int[n];
    std::fill_n(yn, n, 0);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a >> b >> c >> d;
        if (a > b)
            swap(&a, &b);
        if (c > d)
            swap(&c, &d);

        if (((a < c) && (c < b) && (b < d)) || ((c < a) && (a < d) && (d < b)))
            yn[i] = 1;
    }

    for (int i = 0; i < n; ++i)
    {
        if (yn[i])
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    delete yn;
    return 0;
}