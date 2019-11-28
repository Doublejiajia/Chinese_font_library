/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 * 2019-10-24     pilidawulong   baidu 
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include <string.h>
#include <fal.h>
#include <drv_lcd.h>
#include <cn_font.h>



int main(void)
{
	
		fal_init();
		
    /* ���� */
    lcd_clear(WHITE);

    /* ���ñ���ɫ��ǰ��ɫ */
    lcd_set_color(WHITE,BLACK);

    /* ��LCD ����ʾ�ַ� */
    lcd_show_string(55, 5, 24, "RT-Thread");
		show_str(10, 100, 250, 32, (rt_uint8_t *)"����Ԥ��", 32);
		show_str(120, 220, 200, 16, (rt_uint8_t *)"By ����������", 16);
	
    return 0;
}

