from pylab import *
#from numpy import linspace

f = open("eigenvalues.txt","r")
lines = f.readlines()

eigenvalues = []

for line in lines:
	eigenvalues.append(line.split(' ')[0])

N = len(eigenvalues)

x = linspace(0,N,N)

title('Energy-level diagram')
bar(range(N), eigenvalues)
#for i in range(N):
xlabel('Energy')
ylabel('Energy steps')
show()