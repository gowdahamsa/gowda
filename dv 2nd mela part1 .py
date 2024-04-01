import pandas as pd
import matplotlib.pyplot as plt
df=pd.read_csv('melasales1.csv')
df.plot(kind='line',color=('red','blue','brown'))
plt.title('melasales report')
plt.xlabel('day')
plt.ylabel('sales in rs')
plt.show()


