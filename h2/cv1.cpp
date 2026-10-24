#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    // 图片路径：优先使用命令行参数，否则用默认路径
    std::string imagePath = (argc > 1) ? argv[1] : "/home/yifirst/视频/fantascene/ComfyUI_00107_.png";

    // 以彩色模式读取图片
    cv::Mat img = cv::imread(imagePath, cv::IMREAD_COLOR);
    if (img.empty())
    {
        std::cerr << "无法读取图片：" << imagePath << std::endl;
        return -1;
    }

    std::cout << "图片尺寸：" << img.cols << " x " << img.rows
              << "，通道数：" << img.channels() << std::endl;

    // 创建可缩放窗口并显示图片
    const std::string windowName = "Image Display";
    
    // 1. 必须保持 WINDOW_NORMAL，否则 resizeWindow 无效
    cv::namedWindow(windowName, cv::WINDOW_NORMAL); 

    // 2. 设置初始窗口大小：宽 800，高 600
    cv::resizeWindow(windowName, 800, 600); 

    // 3. 显示图片
    cv::imshow(windowName, img);

    // 等待按键（0 表示无限等待）
    std::cout << "按任意键关闭窗口..." << std::endl;
    cv::waitKey(0);

    cv::destroyAllWindows();
    return 0;
}