import pandas as pd
import matplotlib.pyplot as plt
data=pd.read_csv('minmax.csv', usecols=('ANNUAL_MIN', 'ANNUAL_MAX'))
df=pd.DataFrame(data)
df.plot(kind='hist',y='ANNUAL_MIN',title='minimum and annual maximum temperature',color=('red','blue'))
plt.xlabel('temperature')
plt.ylabel('number of times')
plt.show()
