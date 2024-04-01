import numpy as np
import matplotlib.pyplot as plt
discount=np.array([10,20,30,40])
sales=np.array([10000,20000,30000,40000])
size=discount*10
plt.scatter(x=discount,y=sales,s=size,color='red',linewidth=1.87,marker='*',edgecolor='blue')
plt.title("discount vs sales")
plt.xlabel("discount")
plt.ylabel("sales")
plt.show()

