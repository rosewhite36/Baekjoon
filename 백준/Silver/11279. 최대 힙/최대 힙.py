import sys

input = sys.stdin.readline
print = sys.stdout.write

class maxHeap:
    def swap(self, a, b): 
        self.data[a], self.data[b] = self.data[b], self.data[a]

    def __init__(self):
        self.data = [None]

    def push(self, value):
        self.data.append(value)
        child = len(self.data) - 1
        while child > 1:
            parent = child // 2
            if self.data[child] <= self.data[parent]:
                break
            self.swap(child, parent)
            child = parent

    def pop(self):
        if len(self.data) == 1:
            return 0

        max_value = self.data[1]
        self.data[1] = self.data[-1]
        self.data.pop()
        parent = 1
        child = parent * 2
        while child < len(self.data):
            if child + 1 < len(self.data) and self.data[child] < self.data[child + 1]:
                child += 1
            if self.data[parent] >= self.data[child]:
                break
            self.swap(parent, child)
            parent = child
            child = parent * 2  # 이 부분을 이동하면서 다음 자식 노드로 이동
        return max_value

maxH = maxHeap()
N = int(input())
for _ in range(N):
    x = int(input())
    if x:
        maxH.push(x)
    else:
        print(str(maxH.pop()) + '\n')
