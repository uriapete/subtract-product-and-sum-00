#include <iostream>
#include <string>
#include <array>
#include <vector>

class Solution
{
public:
    static int subtractProductAndSum(int n)
    {

        // pseudocode time

        // turn n into string
        // iterate through string, we don't need to modify!
        // push all digits to an array
        // multiply all items, save that
        // sum up all items, save that
        // subtract, save to result
        // return result

        // init return val
        int result = 0;

        std::string nStr = std::to_string(n);
        // std::cout << nStr<<"\n\n";

        // init digi arr
        std::vector<int> digiVect = {};

        // pushing digits into array
        for (int16_t i = 0; i < nStr.length(); i++)
        {
            char chDig = nStr[i];
            int digit = std::atoi(&chDig);
            // std::cout<<int(nStr[i])<<"\n";
            // std::cout<<digit<<"\n";
            digiVect.push_back(digit);
        }
            // std::cout<<"\n\n";


        // initting sum and product vars
        int sum = 0;
        int product = 1;

        // calculating product of all digits:
        for (int16_t i = 0; i < digiVect.size(); i++)
        {
            product *= digiVect[i];
        }

        // std::cout << product<<"\n\n";

        // calculating sum of all digits:
        for (int16_t i = 0; i < digiVect.size(); i++)
        {
            sum += digiVect[i];
        }

        // std::cout << sum<<"\n\n";

        // difference of prod - sum
        result = product - sum;

        // ready to return
        return result;
    }
};

int main()
{
    std::cout<<"Input: n = "<<234<<"\nOutput: "<<Solution::subtractProductAndSum(234)<<"\n\n";
    // Solution::subtractProductAndSum(234);
    std::cout<<"Input: n = "<<4421<<"\nOutput: "<<Solution::subtractProductAndSum(4421)<<"\n\n";
    // Solution::subtractProductAndSum(4421);
}