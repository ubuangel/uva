#include <iostream>
#include <vector>
#include <algorithm>
//https://stackoverflow.com/questions/62309918/search-unsorted-array-for-3-elements-which-sum-to-a-value
//problema 4
//https://cses.fi/problemset/task/1640/
int main()
{
    std::vector<int> vector = {1, 2, 4, 5, 12};
    std::sort(vector.begin(), vector.end());

    int objetivo = 19;
    int no_ = 1;
    

    for (int i = 0; i < vector.size() && no_; i++)
    {

        int empieza_ptr = 0;
        int final_ptr = vector.size()-1;
        int nuevo_ = objetivo-vector[i];

        while (final_ptr > empieza_ptr)
        {
            if(empieza_ptr == i)
                empieza_ptr++;
            if (final_ptr == i) 
                final_ptr--;

            if ((vector[empieza_ptr] + vector[final_ptr]) > nuevo_)
                final_ptr--;
            else if ((vector[empieza_ptr] + vector[final_ptr]) < nuevo_)
                empieza_ptr++;
            else {
                std::cout << "indices : " << final_ptr << ", " << empieza_ptr << ", " << i << std::endl;
                no_ = 0;
                break;
            }
        }
    }
    return 0;
}
