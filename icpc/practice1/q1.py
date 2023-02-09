t = int(input())
while t:
    t -= 1
    li = []
    flag = 0
    for i in range(3):
        in_list = list(map(int,input().split()))
        if in_list in li:
            flag = 1
        li.append(in_list)
    if (flag == 0):
        li1 = sorted(li, key=lambda x:(x[0],x[1],x[2]))
        li2 = sorted(li1, key=lambda x:(x[1],x[2]))
        li3 = sorted(li2, key=lambda x:x[2])
        if li1 == li2 and li2 == li3 and li1 == li3:
            print("yes")
        else:
            print("no")
    else:
        print("no")