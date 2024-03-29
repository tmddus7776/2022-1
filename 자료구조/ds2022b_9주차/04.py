from LinkedQueue import *

class TwoQueueStack:
    def __init__(self):
        self.__q = LinkedQueue()
        self.__tq = LinkedQueue()

    def __move_element(self, q, tq):
        while not q.isEmpty():
            tq.enqueue(q.dequeue())

    def push(self, x):
        self.__move_element(self.__q, self.__tq)
        self.__q.enqueue(x)
        self.__move_element(self.__tq, self.__q)

    def pop(self):
        return self.__q.dequeue()


st = TwoQueueStack()
st.push(1)
st.push(2)
st.push(3)
print(st.pop())
print(st.pop())
print(st.pop())

