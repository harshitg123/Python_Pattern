rows = int(input("Enter rows: "))
itr = rows-1

for i in range(0, rows):
    for j in range(0, itr):
        print(" ",end=" ")

    for k in range(0, i+1):
        if(i==0 or i==(rows-1) or k==0 or k==i):
            print(" * ", end=" ")

        else:
            print("   ", end=" ")
    itr = itr-1
    print("")

'''
OUTPUT:
                   *  
                 *   *
               *       *
             *           *
           *               *
         *                   *
       *                       *  
     *                           *
   *                               *
 *   *   *   *   *   *   *   *   *   *

'''