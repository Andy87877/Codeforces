import random
path = 'C.txt'
f = open(path, 'w')
f.write("100\n")

for i in range(100):
    f.write("\n")
    f.write("3 4\n")
    print(i)
    for j in range(3):
        f.write(str(random.randint(1,2)))
        f.write(" ")
    f.write("\n")
    for j in range(4):
        f.write(str(random.randint(1,2)))
        f.write(" ")
        f.write(str(random.randint(1,2)))
        f.write("\n")
