import pandas as pd
import matplotlib.pyplot as plt
df=pd.read_csv("res12.csv")
df.plot(kind='box',x='year',title='resturaunt')
plt.xlabel("year")
plt.ylabel("rating")
plt.show()


