from re import A
from CircularDoublyLinkedList import *

def do_sim(cache_slots):

    cache_hit = 0
    tot_cnt = 0
    c_slots = CircularDoublyLinkedList()
    data_file = open("linkbench_short.trc")
    
    for line in data_file.readlines():
        lpn = line.split()[0]

        boolx = c_slots.index(lpn)
        if boolx == -12345:
            pass
        else:
            c_slots.remove(lpn)
            cache_hit += 1
        c_slots.append(lpn)
        a = c_slots.size()

        if a > cache_slots:
            c_slots.pop(0)
        tot_cnt += 1

    print("cache_slot = ", cache_slots, "cache_hit = ", cache_hit, "hit ratio = ", cache_hit / tot_cnt)


if __name__ == "__main__":
    
    for cache_slots in range(100, 1000, 100):
        do_sim(cache_slots)