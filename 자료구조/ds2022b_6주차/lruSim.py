from CircularDoublyLinkedList import *

def do_sim(cache_slots):

    cache_hit = 0
    tot_cnt = 0
    list = CircularDoublyLinkedList()
    data_file = open("linkbench.trc")

    for line in data_file.readlines():
        lpn = line.split()[0]
        if lpn in list: 
            list.remove(lpn)
            cache_hit += 1
        else:           
            if(list.size() == cache_slots):
                list.pop(0)
        list.append(lpn) 
        tot_cnt += 1



    print("cache_slot = ", cache_slots, "cache_hit = ", cache_hit, "hit ratio = ", cache_hit / tot_cnt)

if __name__ == "__main__":

    for cache_slots in range(100, 1000, 100):
        do_sim(cache_slots)
