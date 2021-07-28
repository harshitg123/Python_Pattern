rows = int(input("Enter rows: "))
columns = int(input("Enter columns: "))

# Method_1 for printing hollow rectangle.
for i in range(0, rows):
    for j in range(0, columns):
        if(i == 0 or i==(rows-1) or j==0 or j==(columns-1)):
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print("\n", end="")


# Method_2 for printing hollow rectangle.
for i in range(0, rows):
    for j in range(0, columns):
        if(i == 0 or i==(rows-1)):
            print("*", end=" ")
        elif(i>0 and i<(rows-1)):
            print("*", end=" ")
            print("  " * (columns-2),end="")
            print("*",end=" ")
            break
    print("\n", end="")

    """
    OUTPUT:

    * * * * * *
    *         *
    *         *
    * * * * * *
    
    """