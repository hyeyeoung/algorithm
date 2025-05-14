import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())

    arr = [0 for _ in range(n)]
    distance = [0 for _ in range(n)]
    many = 0 # 최대값을 저장하는 변수

    for i in range(n):
        arr[i] = list(sys.stdin.readline().rstrip())

    # 시작점 s
    for s in range(n):
        for e in range(n): 
            if s == e:
                continue
            if arr[s][e] == "Y":
                distance[s] += 1
            else:
                for k in range(n):
                    if arr[s][k] == "Y" and arr[k][e] == "Y":
                        distance[s] += 1
                        break

    print(max(distance))