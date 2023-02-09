def lis(arr):
    n = len(arr)
    lis = [1]*n
    for i in range(1, n):
        for j in range(0, i):
            if ord(arr[i]) >= ord(arr[j]) and lis[i] < lis[j] + 1:
                lis[i] = lis[j]+1
    maximum = 0
    for i in range(n):
        maximum = max(maximum, lis[i])
 
    return lis

t = int(input())
while t:
    t -= 1
    n,q = map(int, input().split())
    li = list(map(str, input().split(' ')))

    sol = []
    for i in range(n):
        sol.append(lis(li[i]))
        print(sol[i])
    