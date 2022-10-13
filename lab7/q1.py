#!/usr/bin/python3

class Camera:
	def __init__(self, pixel, multiple):
		self.pixel = pixel
		self.multiple = multiple
	def takepicture(self):
		self.message = "Bad code"
		print('찰칵\n사진이 저장되었습니다. (화소 : %d만, 배율 : %.1fx)' % (self.pixel, self.multiple))

# 테스트 코드로 변경
if __name__ == "__main__":
	canon= Camera(2430, 1.0)
	canon.takepicture()
