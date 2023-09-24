from tokenize import String


class ListStack:
    def __init__(self):
        self.__stack = []

    def push(self, x):
        self.__stack.insert(0, x)

    def size(self):
        return len(self.__stack)

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

def parenBalance(s:String) -> bool:
    st = ListStack()
    for char in s:
        if char == "(":
            st.push(char)
        elif char == ")":
            if st.size() != 0:
                st.pop()
            else:
                return False
    if st.size() != 0:
        return False
    else:
        return True
    
def main():
    string = input("input string: ")
    result = parenBalance(string)
    print(result)

if __name__ == "__main__":
    main()
