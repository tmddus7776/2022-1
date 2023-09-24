class ListStack:
    def __init__(self):
        self.__stack = []

    def push(self, x):
        self.__stack.insert(0, x)

    def pop(self):
        return self.__stack.pop(0)

    def top(self):
        if self.isEmpty():
            print("No element in stack")
            return None
        else:
            return self.__stack[0]

    def isEmpty(self) -> bool:
        return not bool(self.__stack)

    def popAll(self):
        self.__stack.clear()
    
    def printStack(self):
        print("Stack from top: ", end = ' ')
        for i in range(len(self.__stack)):
            print(self.__stack[i], end = ' ')
        print()