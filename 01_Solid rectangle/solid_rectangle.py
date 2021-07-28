rows = int(input("Enter rows: "))
columns = int(input("Enter columns: "))

for i in range(0, rows):
    for j in range(0, columns):
        print("*",end=" ", sep=" ")
    print("\n", end="")
    