t = int(input())
while t:
    t -= 1
    n = int(input())
    li1 = list(map(int,input().split()))
    li2 = list(map(int,input().split()))
    for i in range(n):
        li1[i] %= li2[i]
    