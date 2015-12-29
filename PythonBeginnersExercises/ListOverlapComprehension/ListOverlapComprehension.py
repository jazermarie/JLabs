# Import random module
import random

# Generate a list randomly
a = random.sample(range(50), random.randint(3,10))
b = random.sample(range(50), random.randint(3,10))

# Create a new list of the common numbers of the list above
c = [num for num in a if num in b]

print a
print b
print c
