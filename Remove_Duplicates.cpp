#include <iostream>
#include <vector>
int removeDuplicates(std::vector<int> &nums);

int main(int argc, char const *argv[])
{
    std::vector<int> input_array(4, 10);

    removeDuplicates(input_array);
    return 0;
}

int removeDuplicates(std::vector<int> &nums)
{
    int length = 0;
    length = sizeof(nums) / sizeof(nums[0]);
    std::cout << nums.size();
    length = sizeof(nums) / sizeof(nums[0]);
    return length;
}