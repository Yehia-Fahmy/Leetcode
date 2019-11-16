mystring = "["
myStack = []
x = 0


for letter in mystring:
    myStack.append(mystring[x])
    x += 1

print(myStack)
myStack.pop()
print(myStack[-1])
