times = int(input())
for ti in range(times):
    n = int(input())
    num = input().strip()  # 使用 strip() 移除前後空白
    string = str(num)

    ans = 0
    tmp = 0

    for i in range(n, 0, -1):
        total = 0

        for j in range(n - i,):
            total = total * 10 + int(string[j])

        # if string[n - i - 1] == '0':
        #     total += 1

        ans += i * (total - tmp)

        tmp = total  # 這裡更改為減去1

    print(int(ans))
