def isValid(self, s):
    is_Valid = True
    index = 0
    square = 0
    curly = 0
    normal = 0
    for letter in s:
        if s[index] == "[":
            square += 1
        if s[index] == "]":
            square -= 1
        if s[index] == "{":
            curly += 1
        if s[index] == "}":
            curly -= 1
        if s[index] == "(":
            normal += 1
        if s[index] == ")":
            normal -= 1
        index += 1

    if square != 0:
        return False
    if normal != 0:
        return False
    if curly != 0:
        return False

    counter = 0
    myStack = []
    myStack.append(s[counter])
    counter += 1

    while is_Valid:
        if myStack[-1] == "[":
            if s[counter] == "]":
                myStack.pop()
            elif s[counter] == "}" or s[counter] == ")":
                is_Valid = False
            else:
                myStack.append(s[counter])
            counter += 1
        if myStack[-1] == "(":
            if s[counter] == ")":
                myStack.pop()
            elif s[counter] == "}" or s[counter] == "]":
                is_Valid = False
            else:
                myStack.append(s[counter])
            counter += 1
        if myStack[-1] == "{":
            if s[counter] == "}":
                myStack.pop()
            elif s[counter] == "]" or s[counter] == ")":
                is_Valid = False
            else:
                myStack.append(s[counter])
            counter += 1

    return is_Valid


print(isValid("[{}]", "[{}]"))

