# def get_max(li_order):
    # max = -1
    # max_index = -1
    # len_li = len(li_order)
    # for i in range(len_li):
    #     if max <= li_order[i]:
    #         max = li_order[i]
    #         max_index = i
    # try:
    #     li_order[max_index] = -1
    # except:
    #     return -1
    # return max

t = int(input())
while t:
    t -= 1
    n, coins = map(int, input().split())
    li = input()
    count_1 = 0
    count_0 = 0

    li_order = []
    for i in range(len(li)):
        if li[i] == '1':
            count_1 += 1
            if count_0 > 0:
                li_order.append(count_0)
                count_0 = 0
        else:
            count_0 += 1

    if count_0 > 0:
        li_order.append(count_0)
    
    while 1:
        check = get_max(li_order)
        if check == -1:
            break
        # print(check)
        if (2*check+1 <= coins):
            count_1 += check
            coins -= (2*check+1)
        else:
            count_1 += ((coins-1)//2)
            break

        if (coins < 3):
            break
    print(count_1)
