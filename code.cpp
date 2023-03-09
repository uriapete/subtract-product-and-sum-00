#include <iostream>
#include <string>
#include <array>
#include <vector>

class Solution
{
public:
    int subtractProductAndSum(int n)
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

        // init digi arr
        std::vector<int> digiVect = {};

        // pushing digits into array
        for (int16_t i = 0; i < nStr.length(); i++)
        {
            digiVect.push_back(nStr[i]);
        }

        // initting sum and product vars
        int sum = 0;
        int product = 1;

        // calculating product of all digits:
        for (int16_t i = 0; i < digiVect.size(); i++)
        {
            product *= digiVect[i];
        }

        // calculating sum of all digits:
        for (int16_t i = 0; i < digiVect.size(); i++)
        {
            sum += digiVect[i];
        }

        // difference of prod - sum
        result = product - sum;

        // ready to return
        return result;
    }
};

int main()
{
}