import matplotlib.pyplot as plt

# Example data for land types
land_types = ['Forest', 'Grassland', 'Desert', 'Urban', 'Agricultural']
land_counts = [500, 300, 100, 200, 400]  # Example counts for each land type

plt.figure(figsize=(8, 6))
plt.bar(land_types, land_counts, color='orange')
plt.title('Distribution of Land Types')
plt.xlabel('Land Type')
plt.ylabel('Count')
plt.xticks(rotation=45)
plt.show()

# Example data for soil types
soil_types = ['Sandy', 'Clay', 'Loam', 'Peat', 'Chalk']
soil_counts = [200, 150, 300, 100, 50]  # Example counts for each soil type

plt.figure(figsize=(8, 6))
plt.bar(soil_types, soil_counts, color='brown')
plt.title('Distribution of Soil Types')
plt.xlabel('Soil Type')
plt.ylabel('Count')
plt.xticks(rotation=45)
plt.show()
