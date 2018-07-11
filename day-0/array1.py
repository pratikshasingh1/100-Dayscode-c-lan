m=int(input('number of rows,m='))
n=int (input('Number of columns,n='))
rows=[]; columns=[]
for m in range (0,m):
  rows += [0]
for n in range (0,n):
  columns += [0]
for i in range (0,m):
  for j in range (0,n):
       matrix[m][n] = int(input())
print (matrix)
