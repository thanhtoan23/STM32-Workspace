# STM32 Microcontroller Lab - VXL

This repository contains lab exercises for the STM32F103C6 microcontroller course, covering fundamental concepts and practical implementations.

---

## 📚 Lab 1 - GPIO, Delay

### Bài 1 - GPIO, Delay
- Giới thiệu về GPIO.
- Giới thiệu về delay.

### Bài 2 - Timer
- Giới thiệu về Timer.
- Sử dụng 1 Timer chung để định thời cho tất cả các tác vụ khác.

### Bài 3 - LCD, Button
- Giới thiệu về thư viện Nút nhấn và Màn hình LCD.

### Bài 4 - Máy trạng thái
- Giới thiệu về Máy trạng thái - (finite-state machine FSM).
- Thực hành bài tập Kéo cờ.

### Bài 5 - Bài tập về Máy trạng thái
- Thực hành bài tập Đèn xi nhan.
- Thực hành bài tập Đèn giao thông.
- Thực hành bài tập Password Door.

### Bài 6 - Đồng hồ thời gian thực
- Giới thiệu chuẩn giao tiếp I2C.
- Giới thiệu về đồng hồ thời gian thực với IC DS3231.
- Thực hành bài tập Đồng hồ thời gian thực.

### Bài 7 - ADC và PWM
- Giới thiệu về ADC và PWM.

---

## 📚 Lab 2 - Timer

### Bài 1 - Timer Interrupt
- Giới thiệu về Timer Interrupt.
- Cấu hình Timer để tạo ngắt định kỳ.

### Bài 2 - LED Scanning
- Giới thiệu về kỹ thuật quét LED.
- Điều khiển nhiều LED với ít chân GPIO.

### Bài 3 - 7-Segment Display
- Giới thiệu về LED 7 đoạn.
- Hiển thị số trên LED 7 đoạn.

### Bài 4 - Matrix LED
- Giới thiệu về ma trận LED.
- Quét và hiển thị hình ảnh trên ma trận LED.

### Bài 5 - Software Timer
- Giới thiệu về Software Timer.
- Tạo nhiều timer ảo từ một timer phần cứng.

### Bài 6 - Exercise 6
- Bài tập thực hành về Timer và LED 7 đoạn.

### Bài 7-8 - Exercise 7-8
- Bài tập tổng hợp Timer, LED, và 7-Segment.

### Bài 9 - LED Matrix Animation
- Hiển thị animation trên ma trận LED.
- Tạo hiệu ứng chuyển động.

### Bài 10 - Exercise 10
- Bài tập nâng cao tổng hợp các kiến thức.

---

## 🛠️ Hardware & Tools

- **Microcontroller**: STM32F103C6
- **IDE**: STM32CubeIDE
- **Simulation**: Proteus
- **Programming Language**: C

---

## 📂 Project Structure

```
STM32-Workspace/
├── Lab_1/
│   ├── Lab1_Ex1/          # Exercise 1
│   ├── Lab1_Ex2/          # Exercise 2
│   ├── Lab1_Ex3/          # Exercise 3
│   ├── Lab1_Ex4/          # Exercise 4
│   ├── Lab1_Ex5/          # Exercise 5
│   ├── Lab1_Ex6/          # Exercise 6
│   └── Lab1_Ex7to10/      # Exercises 7-10
│
└── Lab_2/
    ├── Lab2_Ex1/          # Timer Interrupt
    ├── Lab2_Ex2/          # LED Scanning
    ├── Lab2_Ex3/          # 7-Segment Display
    ├── Lab2_Ex4/          # Matrix LED
    ├── Lab2_Ex5/          # Software Timer
    ├── Lab2_Ex6/          # Exercise 6
    ├── Lab2_Ex7+8/        # Exercises 7-8
    ├── Lab2_Ex9/          # LED Matrix Animation
    └── Lab2_Ex10/         # Exercise 10
```

---

## 🚀 Getting Started

### Prerequisites
- STM32CubeIDE installed
- Proteus (for simulation)
- STM32F103C6 board (for hardware testing)

### How to Use
1. Clone this repository:
   ```bash
   git clone https://github.com/thanhtoan23/STM32-Workspace.git
   ```

2. Open the desired lab folder in STM32CubeIDE.

3. Build and flash the project to your STM32 board, or run simulation in Proteus.

---

## 📖 Documentation

Each lab folder contains:
- `.ioc` file - STM32CubeMX configuration
- `Core/Src/` - Source code files
- `Core/Inc/` - Header files
- `proteus/` - Proteus simulation files
- `Debug/` - Build output files

---

## 👨‍💻 Author

**Thanh Toan**
- GitHub: [@thanhtoan23](https://github.com/thanhtoan23)

---

## 📝 License

This project is for educational purposes as part of the Microcontroller course.

---

## 🙏 Acknowledgments

- STM32 HAL Library Documentation
- STM32CubeMX
- Course instructors and teaching assistants
