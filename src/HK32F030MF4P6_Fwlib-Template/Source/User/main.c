/**
  ******************************************************************************
  * @file    main.c
  * @author  Alexander
  * @version V1.0
  * @date    2022-xx-xx
  * @brief   ����led
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:HK32F030M������ 
  * ��̳    :https://bbs.21ic.com/iclist-1010-1.html
  *
  ******************************************************************************
  */ 
#include "hk32f030m.h" 
 
int main(void)
{
  /* ���뵽���ϵͳ��ʱ���ѱ�����Ϊ32M��
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


