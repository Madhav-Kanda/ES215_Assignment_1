import timeit
import random as rand


dic = {1: 32, 2: 64, 3: 128, 4: 256, 5: 512}
print("Choose an option:\n 1:32,2:64,3:128,4:256,5:512\n")
n = int(input())
num = dic[n]
arr1 = [[rand.random()*100 for i in range(num)] for j in range(num)]
arr2 = [[rand.random()*100 for t in range(num)] for l in range(num)]
ans = [[0 for m in range(num)] for p in range(num)]

start = timeit.default_timer()
for i in range(num):
    for j in range(num):
        for k in range(num):
            ans[i][j] += arr1[i][k]*arr2[k][j]
stop = timeit.default_timer()
print("Meat portion time : ", stop-start)

# print(ans)