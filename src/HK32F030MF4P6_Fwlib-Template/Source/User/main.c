/**
  ******************************************************************************
  * @file    main.c
  * @author  Alexander
  * @version V1.0
  * @date    2022-xx-xx
  * @brief   测试led
  ******************************************************************************
  * @attention
  *
  * 实验平台:HK32F030M开发板 
  * 论坛    :https://bbs.21ic.com/iclist-1010-1.html
  *
  ******************************************************************************
  */ 
#include "hk32f030m.h" 
 
int main(void)
{
  /* 进入到这里，系统的时钟已被配置为32M。
  */
  
  /* Infinite loop */
  while (1)
  {   

  }
}




#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(char* file , uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */	
       /* Infinite loop */
	
	while (1)
  {		
  }
}
#endif /* USE_FULL_ASSERT */


