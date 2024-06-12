if __name__ == '__main__':
    plate = input()
    previous = plate[0]
    res = 10
    for i in range(1, len(plate)):
        if plate[i] == previous: res += 5
        else:  res += 10
        previous = plate[i]
    print(res)
