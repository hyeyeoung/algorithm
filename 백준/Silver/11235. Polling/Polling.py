class mid():
    def __init__(self, n):
        self.n = n
        self.name = {} # 이름 배열
    def Input(self, str):
        if str in self.name:
            self.name[str] += 1
        else:
            self.name[str] = 1
    def Result(self):
        res = sorted(self.name.items(), key=lambda x: x[1], reverse=True)
        list = []
        if len(res) == 1:
            print(res[0][0])
        else:
            for i in range(len(res)):
                if res[i][1] >= res[0][1]:
                    list.append(res[i][0])
            list.sort()
            for i in range(len(list)):
                print(list[i])

if __name__=='__main__':
    n = int(input())
    o = mid(n)
    for i in range(n):
        str = input()
        o.Input(str)
    o.Result()