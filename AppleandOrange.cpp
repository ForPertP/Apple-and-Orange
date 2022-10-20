#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int apple_count = 0;
    int orange_count = 0;
    
    for_each (apples.cbegin(), apples.cend(), 
        [=,&apple_count](auto n)
        {
            int gap = n + a;
            if (gap >= s && gap <= t)
            {
                apple_count++;
            }
        }
    );
    
    for_each (oranges.cbegin(), oranges.cend(), 
        [=,&orange_count](auto n)
        {
            int gap = n + b;
            if (gap >= s && gap <= t)
            {
                orange_count++;
            }
        }
    );
    
    std::cout << apple_count << std::endl;
    std::cout << orange_count;
}
