#Python program to generate Fibonacci series Program using Recursion
def fibonacciSeries(Number):
    if(Number == 0):
        return 0
    elif(Number == 1):
        return 1
    else:
        return (fibonacciSeries(Number - 1) + fibonacciSeries(Number - 2))


n = int(input())
print("Fibonacci series:", end = ' ')
for n in range(0, n):  
   print(fibonacciSeries(n), end = ' ')