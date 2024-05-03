class Q:
    def __init__(self, n):
        self.list = []
        for i in range(n):
            self.list.append(n-i)
    
    def throw(self):
        print(self.list[-1], end=" ")
        self.list.pop()

    def procedure(self):
        while len(self.list) != 0:
            self.throw()
            if len(self.list) > 0:
                tmp = self.list[-1]
                self.list.pop()
                self.list.insert(0,tmp)

if __name__=='__main__':
    n = int(input())
    q = Q(n)
    q.procedure()
