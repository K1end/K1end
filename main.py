import cv2
import numpy as np
import tensorflow as tf

model = tf.keras.applications.MobileNetV2(weights='imagenet')


def rozpoznej_objekt(image):
    preprocessed_image = tf.keras.applications.mobilenet_v2.preprocess_input(image)
    preprocessed_image = np.expand_dims(preprocessed_image, axis=0)

    predictions = model.predict(preprocessed_image)

    decoded_predictions = tf.keras.applications.mobilenet_v2.decode_predictions(predictions, top=1)
    objekt = decoded_predictions[0][0][1]

    return objekt

image = cv2.imread("2018-06-13-16-08-24-1200x800.jpg")

resized_image = cv2.resize(image, (224, 224))

rozpoznany_objekt = rozpoznej_objekt(resized_image)

print(f'Rozpoznaný objekt: {rozpoznany_objekt}')