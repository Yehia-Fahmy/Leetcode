#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target);
int main()
{
    int values[5] = {2, 4, 5, 7, 10};
    std::vector<int> array;
    int target = 9;
    twoSum(array, target);
    return 0;
}

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    size_t array_size = sizeof(nums) / sizeof(nums[0]);
    std::vector<int> output;
    int desired = 0;
    for (size_t index2 = 0; index2 < array_size; index2++)
    {
        desired = target - nums[index2];
        output[0] = nums[index2];
        for (size_t index = 0; index < array_size; index++)
        {
            if (nums[index] == desired)
            {
                output[1] = desired;
                return output;
            }
        }
    }
    std::vector<int> none_found(2, 0);
    return none_found;
}