/*
 * @file    H_pic24e_spi.h
 * @author
 * @version
 * @date    15.08.2017
 * @brief   
 */

#ifndef PIC24E_SPI_H
#define	PIC24E_SPI_H

//******************************************************************************
// ������ include (���������� ������������ ����� ������������ �������)
#include <xc.h>
#include <stdint.h>
//******************************************************************************


//******************************************************************************
// ������ ����������� ��������
//******************************************************************************


//******************************************************************************
// ������ ����������� �����
//******************************************************************************


//******************************************************************************
// ������ ����������� ���������� ����������
//******************************************************************************


//******************************************************************************
// ������ ���������� ���������� �������
extern void Init_SPI1_Master(void);
extern void SPI1_TransmitReceive_Master(uint8_t *pTxData,
        uint8_t *pRxData,
        uint16_t Cnt);
//******************************************************************************


//******************************************************************************
// ������ ����������� ��������
//******************************************************************************


////////////////////////////////////////////////////////////////////////////////
// END OF FILE
////////////////////////////////////////////////////////////////////////////////

#endif	/* PIC24E_SPI_H */
