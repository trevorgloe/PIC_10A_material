import numpy as np

n = 200
sig = 0.1
x = np.linspace(0,2*np.pi,n)
with open("ts_data.txt", "a") as f:
    for val in x:
        data = np.sin(val) + sig * np.random.randn(1)[0] 
        f.write(f"{data}\n")
