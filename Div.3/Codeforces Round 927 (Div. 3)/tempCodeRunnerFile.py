times = int(input())
for ti in range(times):
    
    

    n = int(input())
    num = int(input())
    string = str(num)

    check_size = len(str(num))
    n = check_size

    ans = 0
    tmp = 0
    # print(n)
    for i in range(n,0,-1):
        total = 0
        
        for j in range(0,n-i+1):
            total += int(string[j])
            total *= 10
        total /= 10
        # print(i,total,tmp)
        if (string[n-i-1] == '0'):
            total += 1


        ans += i*(total-tmp)

        tmp = total
    print(int(ans))
