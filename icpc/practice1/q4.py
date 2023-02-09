import math

t = int(input())
while t:
    t -= 1
    li = []
    n,s = map(int,input().split())
    if n == 1:
        if s == 0:
            print(0)
        else:
            print(-1)
    else:
        if (n%2):
            li.append(0)
            s *= math.sqrt(n/(n-1))
            n -= 1
        for i in range((n-1)//2 + 1):
            li.append(s)
            li.append(-1*s)
        print(*li)