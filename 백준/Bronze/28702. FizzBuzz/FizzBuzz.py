if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = 0
    if a.isdigit() == True: d = int(a)+3
    elif b.isdigit() == True: d = int(b)+2
    elif c.isdigit() == True: d = int(c)+1

    if d % 3 == 0 and d % 5 == 0: print("FizzBuzz")
    elif d % 3 == 0 and d % 5 != 0: print("Fizz")
    elif d % 3 != 0 and d % 5 == 0: print("Buzz")
    else: print(d)

