import sys, math
if __name__ == "__main__":
    n = int(sys.stdin.readline())
    if n != 1:
        index = 2 
        while n != 1:
            if n % index != 0:
                index += 1
            if n % index == 0:
                n /= index
                print(index)