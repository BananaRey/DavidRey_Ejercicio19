import numpy as np
import matplotlib.pyplot as plt

archivo=np.loadtxt('por.txt')

x=archivo[:,0]
y=archivo[:,1]
teo=np.exp(-x)
error=abs((y-teo)/teo)
plt.plot(x,error)
plt.show()
plt.savefig('error1.png')
