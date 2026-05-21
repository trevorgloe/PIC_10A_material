import numpy as np
import matplotlib.pyplot as plt

x = []
y = []
with open("data.txt", "r") as f:
    for line in f:
        # print(line)
        items = line.split(" ")
        x.append(float(items[0]))
        y.append(float(items[1]))

xnp = np.array(x)
ynp = np.array(y)
# print(xnp)
# print(ynp)
fig = plt.figure()
plt.plot(xnp, ynp, 'b.')

# m1 = 0.088325
# m2 = 0.175
# fity = m1*xnp + m2
fity = 0.104489 + 0.0627061*xnp + 0.0627*np.power(xnp, 2)
plt.plot(xnp, fity, 'r.')
plt.show()
