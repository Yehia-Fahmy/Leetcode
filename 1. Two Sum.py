import sys

nums = [3, 2, 4]
target = 6

List = [0, 0]
counter = 0
max_index = -1
for number in nums:
    max_index = max_index + 1

for number in nums:
    if nums[counter] == target:
        print("The number was found in the nums")
    counter = counter + 1

    # if the number if not found in the nums then move on to these steps
counter = 0
for number in nums:
    counter2 = 0
    for number in nums:
        if counter != counter2:
            if nums[counter] + nums[counter2] == target:
                List[1] = counter
                List[0] = counter2
                print(List)
                sys.exit()
            counter2 = counter2 + 1
    counter = counter + 1
print("Sorry, Not Possible")

# something

