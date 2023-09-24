from LinkedListBasic import *

class LinkedStack:
    def __init__(self):
        self.__list = LinkedListBasic()

    def push(self, newItem):
        self.__list.insert(0, newItem)

    def pop(self):
        return self.__list.pop(0)

    def top(self):
        if self.isEmpty():
            return None
        else:
            return self.__list.get(0)

    def isEmpty(self) -> bool:
        return self.__list.isEmpty()

    def popAll(self):
        self.__list.clear()

    def printStack(self):
        print("Stack from top: ", end = ' ')
        for i in range(self.__list.size()):
            print(self.__list.get(i), end = '')
        print()


stack = LinkedStack()
# abc$cba
def iselement(data):

    for char in data:
        if char == "$":
            break
        stack.push(char)
    #stack : cba
    
    for i in range(data.index("$")+1, len(data)):
        if data[i] == stack.top():
            stack.pop()
        else:
            return False

    return True


data = "abc$cba"
print(data, "는 집합의 원소이다:", iselement(data))