print ("enter n for nxn matrix")
n = input()
matrix1 = []
matrix2 = []
print ("Enter elements of first matrix")
for i in range(0,n):
 print ("Enter elements of ",i,"column, seperated by space")
 matrix1.append(map(int,raw_input().split()))
 print ("Matrix 1 is",matrix1)
print ("Enter elements of second matrix")
for i in range(0,n):
 print ("Enter elements of ",i,"column, seperated by space")
 matrix2.append(map(int,raw_input().split()))
 print ("Matrix 1 is",matrix1)

multi_matrix = []
for i in range(0,n):
  a = []
  for j in range(0,n):
    sum = 0
    for k in range(0,n):
      sum = sum+(matrix1[i][k]*matrix2[k][j])
    a.append(summ)
  multi_matrix.append(a)
print ("matrix1 x matrix 2 =",multi_matrix)



   
