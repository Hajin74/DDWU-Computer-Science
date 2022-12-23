#!/usr/bin/python3

import sys
from os import listdir
import numpy as np
import operator

def createDataSet(dataSet):
	dataSetList = listdir(dataSet)
	dataSetLen = len(dataSetList) # 파일의 개수 세기
	
	matrix = np.zeros((dataSetLen, 1024)) # 1024는 요소의 개수
	labels = []

	# 파일의 개수만큼 루프돌기
	for i in range(dataSetLen):
		fileName = dataSetList[i]
		answerNum = int(fileName.split('_')[0]) # ex)0_12이면 0을 뽑음
		labels.append(answerNum)
		matrix[i, :] = getVector(dataSet + '/' + fileName)
	
	return matrix, labels

def getVector(fileName):
	vector = np.zeros((1, 1024))
	
	with open(fileName) as f:
		for i in range(32):
			line = f.readline()
			for j in range(32):
				vector[0, 32 * i + j] = int(line[j])
		
		return vector

def classify0(inX, dataSet, labels, k):
	dataSetSize = dataSet.shape[0]
	diffMat = np.tile(inX, (dataSetSize, 1)) - dataSet
	sqDiffMat = diffMat ** 2
	sqDistances = sqDiffMat.sum(axis = 1)
	distances = sqDistances ** 0.5
	sortedDistIndicies = distances.argsort()
	classCount = {}

	for i in range(k):
		voteIlabel = labels[sortedDistIndicies[i]]
		classCount[voteIlabel] = classCount.get(voteIlabel, 0) + 1


	sortedClassCount = sorted(classCount.items(), key = operator.itemgetter(1), reverse = True)

	return sortedClassCount[0][0]


trainingDigits = sys.argv[1]
testDigits = sys.argv[2]

testDigitsList = listdir(testDigits)
length = len(testDigitsList)

matrix, labels = createDataSet(trainingDigits)
# print("matrix ", matrix)
# print("labels ", labels)

for k in range(1, 21):
	allCount = 0
	errorCount = 0

	for i in range(length):
		answer = int(testDigitsList[i].split('_')[0])
		testData = getVector(testDigits + '/' + testDigitsList[i])
		result = classify0(testData, matrix, labels, k)

		allCount += 1
		if answer != result:
			errorCount += 1

	errorRate = int(errorCount / allCount * 100) 
	print(errorRate)

