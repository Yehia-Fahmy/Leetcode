#include <iostream>
#include <string>

int numJewelsInStones(std::string J, std::string S);

int main(int argc, char const *argv[])
{
    std::string a = "aAbBcC";
    std::string b = "aopsdjfecbCC";
    std::cout << "There are: " << numJewelsInStones(a, b) << " jewels!" << std::endl;
    return 0;
}

int numJewelsInStones(std::string J, std::string S)
{
    int answer = 0;
    for (char c1 : S)
    {
        for (char c2 : J)
        {
            if (c1 == c2)
            {
                answer++;
            }
        }
    }

    return answer;
}