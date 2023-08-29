import cv2 as cv2
import numpy as np
from skimage.feature import hog
import matplotlib.pyplot as plt


image_path =  r'C:\Users\mohit\Desktop\placement-guy\download (2).jpeg'
image = cv2.imread(image_path)
image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB) # Convert BGR to RGB

# HOG ke parameters
orientations = 9
x
pixels_per_cell = (8, 8)
# normalised kar diya block ko
cells_per_block = (2, 2)


gray_image = cv2.cvtColor(image, cv2.COLOR_RGB2GRAY)


hog_features, hog_image = hog(gray_image, orientations=orientations, 
pixels_per_cell=pixels_per_cell, cells_per_block=cells_per_block, visualize=True)


# plotting original vs HOG one
fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 6))

ax1.imshow(image)
ax1.set_title('Original Image')


ax2.imshow(hog_image, cmap=plt.cm.gray)
ax2.set_title('HOG Image')


plt.show()