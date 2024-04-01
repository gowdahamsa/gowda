import pandas as pd
import matplotlib.pyplot as plt
df=pd.read_csv("res12.csv")
df.plot(kind='box',x='year',title='resturaunt',vert=False,patch_artist=True)
plt.xlabel("resorts")
plt.ylabel("rating")
plt.show()


