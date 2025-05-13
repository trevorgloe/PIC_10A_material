# Create the data for a fruit store application

import random as rand

f = open("fruit_data.txt", "w")

names = [
    "Olivia Chen",
    "Marcus Albright",
    "Aisha Nasser",
    "Diego Morales ",
    "Elena Petrova ",
    "Samuel Osei ",
    "Mei Ling Zhao ",
    "Liam Gallagher ",
    "Priya Kapoor ",
    "Yusuf Demir ",
    "Natalie Brooks ",
    "Javier Ramos ",
    "Keiko Tanaka ",
    "Alexander Novak ",
    "Will Toledo",
    "Daniel Svensson ",
    "Sofia Romano ",
    "Henry Wallace ",
    "Sally Ride ",
    "Arjun Mehta",
    "Amelia Hart",
    "Rajesh Patel",
    "Lucia Fernandez",
    "Malik Johnson",
    "Hana Kobayashi",
    "Ethan Maxwell",
    "Nour El-Sayed",
    "Isabella Caruso",
    "Ahmed Ghaffar",
    "Chloe Nguyen",
    "Tomasz Kowalski",
    "Maya Sinclair",
    "Darius Chen",
    "Fatima Zahra",
    "Owen McCarthy",
    "Leila Haddad",
    "Viktor Ivanov",
    "Naomi Goldstein",
    "Jamal Washington",
    "Saskia van Dijk"
]

fruit = ["Apple", "Pear", "Grapes", "Orange", "Mango", "Cherry"]
prices = [1.99, 3.49, 2.99, 1.49, 4.29, 3.49]

name_num = len(names)
fruit_num = len(fruit)

for i in range(150):
    name_idx = rand.randint(0,name_num-1)
    num_of_fruit = rand.randint(1,5) # number of fruit purchased
    fruit_string = "";
    price_tot = 0
    for j in range(num_of_fruit):
        idx = rand.randint(0, fruit_num-1)
        fruit_string = fruit_string + fruit[idx] + ", "
        price_tot += prices[idx]
   
    p = f"{price_tot:.2f}"
    hour = rand.randint(7, 17)
    min = rand.randint(1,59)
    time = f"{hour:02}:{min:02}"
    f.write(names[name_idx] + "; " + fruit_string + "price: " + p + ", " + time + "\n")


