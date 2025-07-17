if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    new=list(set(arr))
    new.sort()
    print (new[-2])
