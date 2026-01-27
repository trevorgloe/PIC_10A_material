import numpy as np
import matplotlib.pyplot as plt

old_data = []
new_data = []
x = np.linspace(0, 2*np.pi, 200)

with open("ts_data.txt", "r") as f:
    for line in f:
        old_data.append(float(line))

with open("new_ts_data.txt") as f:
    for line in f:
        new_data.append(float(line))

old_data = np.array(old_data)
new_data = np.array(new_data)
fig, (ax1, ax2) = plt.subplots(2,1, sharex=True)
ax1.plot(x, old_data, label="Raw data")
ax2.plot(x, new_data, label="Smoothed data")
# ax1.ylabel("Raw data")
# ax2.ylabel("Smoothed data")
ax1.set_ylabel("Raw data")
ax2.set_ylabel("Smoothed data")

plt.show()
