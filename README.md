# Estimating Pi Using Monte-Carlo Methods in C++

## Overview

The purpose of this project is to practice (pseudo-)random number generation and Monte-Carlo methods in C++.
The aim is to arrive at an approximation for $`\pi`$ through generation of random points in two dimensions
within a square.

The ratio, $`R`$, of the areas of the unit circle, $`A_c`$, and a square of side-length $`2`$, is given by
```math
R \equiv \frac{A_c}{A_s} = \frac{N_c}{N_s},
```
where $`N_c`$ and $`N_s`$ are the number of points generated within the circle and square respectively. 
The area of the square is $`A_s = 4`$, and $`N_s`$ is the total number of points within the simulation.
This means $`\pi`$ can be calculated as
```math
\pi = 4R = \frac{4 N_c}{N_s}.
```
The code uses $`N_s=10000`$ points generated within a square centered on the origin. $`N_c`$ is the number
of points whos distance, $`r`$, from the origin is greater than unity. This is calculated using the Pythagorean theorem:
```math
r = \sqrt{x^2 + y^2},
```
where $`x`$ and $`y`$ are the coordinates of the point in question.

# Instillation and Usage

To download and compile the code (using g++ on Linux), open the terminal and type 
```bash
git clone git@github.com:ollie-m0/pi_monte_carlo.git
cd pi_monte_carlo
g++ predict_pi_2d.cpp -o predict_pi
```
To run the code simply type
```bash
./predict_pi
```

This will print an approximate value of $`\pi`$ to your terminal.
