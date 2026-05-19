import numpy as np

x = np.random.rand(400)
y = np.exp(x - 0.2) / 8

with open("data.txt", "w") as f:
    for i in range(400):
        f.write(str(x[i]))
        f.write(" ")
        f.write(str(y[i]))
        f.write("\n")

