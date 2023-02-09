t = int(input())
while t:
    t -= 1
    n = int(input())
    li = input()
    li_pos = list(map(int, input().split()))
    new_li = [0,0]*n
    for i in range(n):
        new_li[i] = [li_pos[i],i]
    new_li.sort()
    print(new_li)