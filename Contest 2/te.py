with open("t.txt","w") as f:
    f.write("100000 100000\n")
    for i in range(100000):
        f.write(str(1)+"\n")