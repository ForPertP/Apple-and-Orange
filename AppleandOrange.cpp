void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int apple_count = 0;
    int orange_count = 0;
    
    for_each (apples.begin(), apples.end(), 
        [=,&apple_count](auto n)
        {
            int gap = n + a;
            if (gap >= s && gap <= t)
            {
                apple_count++;
            }
        }
    );
    
    for_each (oranges.begin(), oranges.end(), 
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
