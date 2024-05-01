class vote:
    def __init__(self, n):
        self.n = n
        self.list = []
        self.max = -1
    
    def input(self, x):
        self.list.append(x)
        if x > self.max:
            self.max = x

    def proces(self):
        sol = 0
        rest_list = self.list[1:]
        rest_list.sort(reverse=True)
        if self.n == 1:
            return sol
        
        while(True):
            if self.list[0] > rest_list[0]:
                return sol
            else:
                self.list[0] += 1
                rest_list[0] -= 1
                sol += 1
                rest_list.sort(reverse=True)
        

if __name__=='__main__':
    n = int(input())
    v = vote(n)
    for i in range(n):
        m = int(input())
        v.input(m)
    print(v.proces())
    
