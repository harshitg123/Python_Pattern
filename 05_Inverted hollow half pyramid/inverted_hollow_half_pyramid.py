row = int(input("Enter rows: "))

for i in range(row, 0, -1):
    for j in range(0, i):
        if(i==row or i==1 or j==0 or j==(i-1)):
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print("")

'''
OUTPUT:

* * * * * * 
*       *
*     *
*   *
* *
*

'''