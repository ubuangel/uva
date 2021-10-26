#include <iostream>
#include <vector>
#include <algorithm>
//ojo ver validacion
//problema 4
//https://cses.fi/problemset/task/1640/

int main()
{
	int entrada,tam,objetivo;
	std::cin>>tam>>objetivo;
	
	std::vector<int> vector(tam,0);
    
    for ( int i = 0; i < tam; i += 1)
    {
    	std::cin>>vector[i];
    	
    }
    std::sort(vector.begin(), vector.end());
	
 
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
                std::cout<< i << " " << empieza_ptr << " " << final_ptr << std::endl;
                no_ = 0;
                break;
            }
        }
    }
    return 0;
}
