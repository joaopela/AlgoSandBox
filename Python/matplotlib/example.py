#!/bin/python

# Import the necessary modules and libraries
import numpy as np
import matplotlib.pyplot as plt
import scipy.signal as sp_sig

val     = np.array(range(0,50))
sig     = sp_sig.gaussian(50, std=6) * 50
exp     = np.random.rand(50)
exp     = (2*(exp - 0.5)) / 5 # Random numbers between [-0.2, 0.2]
exp     = (1 + exp) * sig
exp_err = np.sqrt(exp)

fig = plt.figure()
plt.plot    (val, sig, color="cornflowerblue", label="Theory", linewidth=2, alpha=0.8)
plt.errorbar(val, exp, yerr=exp_err, color="yellowgreen", label="Experimental", fmt='o', capsize=3, elinewidth=1)
plt.xlabel("Value")
plt.ylabel("Quantity")
plt.title("Example of matplotlib")
plt.legend()
plt.grid()
plt.show()

plt.savefig('plot.png')
plt.savefig('plot.pdf')
plt.close(fig)
