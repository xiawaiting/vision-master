import numpy as np

def inversion(img):
    return -img


def addition(img, n):
    aimg = img + n
    np.clip(aimg, 0, 255, out=aimg)
    return aimg


def scaling(img, k):
    simg = k*img
    np.clip(simg, 0, 255, out=simg)
    return simg


def