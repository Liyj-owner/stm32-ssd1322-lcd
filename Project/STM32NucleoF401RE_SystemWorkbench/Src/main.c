/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/

#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include "SSD1322/SSD1322.h"
#include "fonts.h"
#include "images.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
SPI_HandleTypeDef hspi2;

UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_SPI2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

static void _sendCommand(uint8_t command) {
    HAL_GPIO_WritePin(OLED_SPI_NSS_GPIO_Port, OLED_SPI_NSS_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(OLED_SPI_DC_GPIO_Port, OLED_SPI_DC_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(OLED_SPI_NSS_GPIO_Port, OLED_SPI_NSS_Pin, GPIO_PIN_RESET);

    HAL_SPI_Transmit(&hspi2, &command, 1, 0xFF);
    //HAL_Delay(0);

    HAL_GPIO_WritePin(OLED_SPI_NSS_GPIO_Port, OLED_SPI_NSS_Pin, GPIO_PIN_SET);
}

static void _sendData(uint8_t *data, int32_t length) {
    HAL_GPIO_WritePin(OLED_SPI_NSS_GPIO_Port, OLED_SPI_NSS_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(OLED_SPI_DC_GPIO_Port, OLED_SPI_DC_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(OLED_SPI_NSS_GPIO_Port, OLED_SPI_NSS_Pin, GPIO_PIN_RESET);

    HAL_SPI_Transmit(&hspi2, data, length, 0xFF);
    //HAL_Delay(0);

    HAL_GPIO_WritePin(OLED_SPI_NSS_GPIO_Port, OLED_SPI_NSS_Pin, GPIO_PIN_SET);
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_SPI2_Init();
  /* USER CODE BEGIN 2 */
  //ssd1322_init(&hspi2, OLED_SPI_NSS_GPIO_Port, OLED_SPI_NSS_Pin, OLED_SPI_DC_GPIO_Port, OLED_SPI_DC_Pin);
    ssd1322_init(_sendCommand, _sendData);
    MTGLInitStruct mtgl_init = {
        .screen_size.width = SSD1322_SCREEN_WIDTH,
        .screen_size.height = SSD1322_SCREEN_HEIGHT,
        .screen_bpp = SSD1322_SCREEN_BPP,
        .screen_buffer = ssd1322_screen_buffer,
        .flushBufferFunction = ssd1322_flushBuffer,
    };
    MTGL_attatchHAL(&mtgl_init);
    /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int32_t i = -64;
  uint8_t txt[] = "Reset\n";
  HAL_UART_Transmit(&huart2, txt, sizeof(txt), 1000);

  char text_buffer[128] = "";
  float counter = 1;

  uint32_t frame_time = 0;
  const Image *img = &image_banana;
  while (1) {
	uint32_t time_start = HAL_GetTick();
	MTGL_fill(0);

	//MTGL_drawImage((256 - img->width) / 2, -i, img);

	//snprintf(text_buffer, sizeof(text_buffer), "AsDg\n2342\nasz\n24eADAD");
	//MTGL_drawString(text_buffer, 10 + i, -i, &font_cherry_monospace_light_28_2bpp, 1.2f);

	//snprintf(text_buffer, sizeof(text_buffer), "%lums", frame_time);
	//MTGL_drawString(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, 1.5f);
	//MTGL_drawString(text_buffer, 0, 10, &font_px_sans_nouveaux_12_1bpp, 1.5f);

	MTGLSize area = { 256, 64 };
	snprintf(text_buffer, sizeof(text_buffer), "1 First line to align\n2 And second align\n3 me too . . . long long long long text");
	float spacing = 1.0f;
//    MTGL_drawStringAligned(text_buffer, 0, -2, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_LEFT_TOP);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_CENTER_TOP);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_RIGHT_TOP);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_LEFT_MIDDLE);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_CENTER_MIDDLE);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_RIGHT_MIDDLE);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_LEFT_BOTTOM);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_CENTER_BOTTOM);
//    MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, TEXT_ALIGNMENT_RIGHT_BOTTOM);


	int x1 = 0;
	int x2 = 255;
	int y1 = 0;
	int y2 = 63;
	int steps = 8;
	int step = 256 / steps;
	for (int x = -2; x < steps + 2; x++) {
	    if (x % 2) {
	        MTGL_drawLine(i + x * step, y1, i + x * step + step, y2, 17);
	    }
	    else {
	        MTGL_drawLine(i + x * step, y2, i + x * step + step, y1, 17);
	    }
	}


	MTGL_drawLine(x1, y1, x2, y1, 0xFF);
	MTGL_drawLine(x2, y1, x2, y2, 0xFF);
	MTGL_drawLine(x2, y2, x1, y2, 0xFF);
	MTGL_drawLine(x1, y2, x1, y1, 0xFF);

	TextAlignment a = (uint8_t)i % 16;
	MTGL_drawStringAligned(text_buffer, 0, 0, &font_px_sans_nouveaux_8_1bpp, spacing, area, a);

	//HAL_Delay(100);
	MTGL_flushBuffer();
	uint32_t time_end = HAL_GetTick();
	frame_time = time_end - time_start;

//	HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
//	HAL_Delay(50);
//	HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);

//	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
//	HAL_Delay(50);
//	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);

	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);

	//uint8_t txt[] = "UART Test\n";
	//HAL_UART_Transmit(&huart2, txt, sizeof(txt), 1000);

	i++;
	if (i > step * 2) {
	  i = 0;
	}
	counter += 0.01;
	HAL_Delay(500);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief SPI2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI2_Init(void)
{

  /* USER CODE BEGIN SPI2_Init 0 */

  /* USER CODE END SPI2_Init 0 */

  /* USER CODE BEGIN SPI2_Init 1 */

  /* USER CODE END SPI2_Init 1 */
  /* SPI2 parameter configuration*/
  hspi2.Instance = SPI2;
  hspi2.Init.Mode = SPI_MODE_MASTER;
  hspi2.Init.Direction = SPI_DIRECTION_2LINES;
  hspi2.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi2.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi2.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi2.Init.NSS = SPI_NSS_SOFT;
  hspi2.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
  hspi2.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi2.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi2.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi2.Init.CRCPolynomial = 10;
  if (HAL_SPI_Init(&hspi2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI2_Init 2 */

  /* USER CODE END SPI2_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LD2_Pin|OLED_SPI_NSS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, OLED_SPI_DC_Pin|BUZZER_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LD2_Pin OLED_SPI_NSS_Pin */
  GPIO_InitStruct.Pin = LD2_Pin|OLED_SPI_NSS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : OLED_SPI_DC_Pin BUZZER_Pin */
  GPIO_InitStruct.Pin = OLED_SPI_DC_Pin|BUZZER_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
