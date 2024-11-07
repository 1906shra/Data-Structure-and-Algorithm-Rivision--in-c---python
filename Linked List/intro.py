class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

def insert(head, val):
    n = Node(val)
    if head[0] is None:
        head[0] = n
        return
    temp = head[0]
    while temp.next is not None:
        temp = temp.next
    temp.next = n

def display(head):
    temp = head
    while temp is not None:
        print(temp.data, end=" -> ")
        temp = temp.next
    print("None")

def reverse(head):
    prev = None
    curr = head
    while curr is not None:
        nex = curr.next
        curr.next = prev
        prev = curr
        curr = nex
    return prev

def kreverse(head, k):
    c = 0
    pre = None
    cu = head
    ne = None
    while cu is not None and c < k:
        ne = cu.next
        cu.next = pre
        pre = cu
        cu = ne
        c += 1
    if ne is not None:
        head.next = kreverse(ne, k)
    return pre

if __name__ == "__main__":
    head = [None]  # Using a list to simulate pass-by-reference for head
    insert(head, 1)
    insert(head, 2)
    insert(head, 3)
    insert(head, 4)
    insert(head, 5)
    insert(head, 6)
    print("Original List:")
    display(head[0])
    
    reversed_head = reverse(head[0])
    print("Reversed List:")
    display(reversed_head)

    k = 2
    k_reversed_head = kreverse(head[0], k)
    print(f"K-Reversed List (k={k}):")
    display(k_reversed_head)