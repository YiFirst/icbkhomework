import cv2
img = cv2.imread("/home/yifirst/图片/bizhi/ComfyUI_00104_.png")
cv2.namedWindow("deepseek", cv2.WINDOW_NORMAL)
cv2.resizeWindow("deepseek", 1536, 1024)
cv2.imshow("deepseek", img)
cv2.waitKey(0)
cv2.destroyAllWindows()