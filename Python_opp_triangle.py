k=10

print("* "*10 );

for i in range(1, 10):
    print(" " * i, end="");
    
    for j in range(k, 1, -1):
        print("* ", end="")
         
    print("\n", end="")
    k=k-1
