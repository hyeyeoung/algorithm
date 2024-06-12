import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    vote = list(map(str, sys.stdin.readline()))
    if vote.count("A") > vote.count("B"): print("A")
    elif vote.count("A") < vote.count("B"): print("B")
    else: print("Tie")