from ListQueue import *

def iselement(data):
    
    queue = ListQueue()
    for char in data:
        if char == "$":
            break
        queue.enqueue(char)

    for i in range(len(data)-1, data.index("$"), -1):
        if data[i] == queue.front():
            queue.dequeue()
        else:
            return False
        return True

data = "abc$cba"
print(data, "는 집합의 원소이다:", iselement(data))