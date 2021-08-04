rows = int(input("Enter Rows: "))
itr = rows

for i in range(0, rows):
    for j in range(0, i):
        print(" ",end=" ")
    
    for k in range(0, itr):
        print(" i ", end=" ")
    
    itr = itr-1
    print("")

'''
OUTPUT:

 *   *   *   *   *   *   *   *
   *   *   *   *   *   *   *
     *   *   *   *   *   *
       *   *   *   *   *
         *   *   *   *
           *   *   *
             *   *
               *
'''