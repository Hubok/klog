/***************************************************************************
                          tst_adifforfield.cpp  -  description
                             -------------------
    begin                : Oct 2021
    copyright            : (C) 2021 by Jaime Robles
    email                : jaime@robles.es
 ***************************************************************************/

/****************************************************************************
 * This file is part of Testing suite of KLog.                               *
 *                                                                           *
 *    KLog is free software: you can redistribute it and/or modify           *
 *    it under the terms of the GNU General Public License as published by   *
 *    the Free Software Foundation, either version 3 of the License, or      *
 *    (at your option) any later version.                                    *
 *                                                                           *
 *    The testing suite of KLog is distributed in the hope that it will      *
 *    be useful, but WITHOUT ANY WARRANTY; without even the implied          *
 *    warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.       *
 *    See the GNU General Public License for more details.                   *
 *                                                                           *
 *    You should have received a copy of the GNU General Public License      *
 *    along with Testing suite of KLog.                                      *
 *    If not, see <https://www.gnu.org/licenses/>.                           *
 *                                                                           *
 *****************************************************************************/

#include <QtTest>
#include "../../src/utilities.h"
#include "../../src/locator.h"
#include "../../src/klogdefinitions.h"
#include "../../src/adifforfield.h"

class tst_ADIFForField : public QObject
{
    Q_OBJECT

public:
    tst_ADIFForField();
    ~tst_ADIFForField();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_Constructor();
    void test_getADIFForQSODate();
    void test_getADIFForCall();
    void test_getADIFForRSTSent();
    void test_getADIFForRSTRcvd();
    void test_getADIFForBand();
    void test_getADIFForMode();
    void test_getADIFForSubMode();
    void test_getADIFForCQz();
    void test_getADIFForITUz();
    void test_getADIFForDXCC();
    void test_getADIFForAddress();
    void test_getADIFForAge();
    void test_getADIFForCNTY();
    void test_getADIFForComment();
    void test_getADIFForA_Index();
    void test_getADIFForAnt_az();
    void test_getADIFForAnt_el();
    void test_getADIFForAnt_path();
    void test_getADIFForARRL_sect();
    void test_getADIFForGridSquare();
    void test_getADIFForMyGridSquare();
    void test_getADIFForQSODateOff();
    void test_getADIFForFreq();
    void test_getADIFForStationCallsign();
    void test_getADIFForBandRX();
    void test_getADIFForFreq_rx();

    void test_getADIFForQSLRdate();
    void test_getADIFForQSLSDate();
    void test_getADIFForQSLRcvd();
    void test_getADIFForQSLSent();

private:
    ADIFForField *adifForField;

};

tst_ADIFForField::tst_ADIFForField()
{
    //util = new Utilities;
    adifForField = new ADIFForField();
}

tst_ADIFForField::~tst_ADIFForField()
{

}

void tst_ADIFForField::initTestCase()
{

}

void tst_ADIFForField::cleanupTestCase()
{

}

void tst_ADIFForField::test_Constructor()
{
    //QVERIFY(util->getVersion() == "0.0");
}


void tst_ADIFForField::test_getADIFForQSODate()
{
    //yyyy-MM-dd hh:mm:ss
    qDebug() << adifForField->getADIFForQSODate ("2021-10-17 12:52:12");
    QVERIFY2(adifForField->getADIFForQSODate ("2021-10-17 12:52:12") == "<QSO_DATE:8>20211017 <TIME_ON:6>125212 ", "Date not properly exported");
    QVERIFY2(adifForField->getADIFForQSODate ("2021-10-17 12:52:12", ModeEQSL) == "<QSO_DATE:8>20211017 <TIME_ON:4>1252 ", "Date not properly exported - EM");
    QVERIFY2(adifForField->getADIFForQSODate ("BAD date") == QString(), "Bad Date not properly exported");
    QVERIFY2(adifForField->getADIFForQSODate ("BAD date", ModeEQSL) == QString(), "Bad Date not properly exported - EM");
}

void tst_ADIFForField::test_getADIFForCall()
{
  QVERIFY2(adifForField->getADIFForCall ("EA4K") == "<CALL:4>EA4K ", "Call not properly exported");
  QVERIFY2(adifForField->getADIFForCall (QString()) == QString(), "Empty call not properly exported");
}
void tst_ADIFForField::test_getADIFForRSTSent()
{
    QVERIFY2(adifForField->getADIFForRSTSent ("599") == "<RST_SENT:3>599 ", "RSTSent not properly exported");
    QVERIFY2(adifForField->getADIFForRSTSent ("59") == "<RST_SENT:2>59 ", "RSTSent not properly exported");
    QVERIFY2(adifForField->getADIFForRSTSent (QString()) == QString(), "Empty RSTSent not properly exported");
}

void tst_ADIFForField::test_getADIFForRSTRcvd()
{
    QVERIFY2(adifForField->getADIFForRSTRcvd ("599") == "<RST_RCVD:3>599 ", "RSTRcvd not properly exported");
    QVERIFY2(adifForField->getADIFForRSTRcvd ("59") == "<RST_RCVD:2>59 ", "RSTRcvd not properly exported");
    QVERIFY2(adifForField->getADIFForRSTRcvd (QString()) == QString(), "Empty RSTSent not properly exported");
}

void tst_ADIFForField::test_getADIFForBand()
{
    QVERIFY2(adifForField->getADIFForBand ("40M") == "<BAND:3>40M ", "Band not properly exported 40M");
    QVERIFY2(adifForField->getADIFForBand ("2M") == "<BAND:2>2M ", "Band not properly exported 2M");
    QVERIFY2(adifForField->getADIFForBand (QString()) == QString(), "Empty Band not properly exported");
}

void tst_ADIFForField::test_getADIFForBandRX()
{
    QVERIFY2(adifForField->getADIFForBandRX ("40M") == "<BAND_RX:3>40M ", "Band_RX not properly exported 40M");
    QVERIFY2(adifForField->getADIFForBandRX ("2M") == "<BAND_RX:2>2M ", "Band_RX not properly exported 2M");
    QVERIFY2(adifForField->getADIFForBandRX (QString()) == QString(), "Empty Band_RX not properly exported");
}

void tst_ADIFForField::test_getADIFForMode()
{
    QVERIFY2(adifForField->getADIFForMode ("SSB") == "<MODE:3>SSB ", "Band not properly exported SSB");
    QVERIFY2(adifForField->getADIFForMode ("CW") == "<MODE:2>CW ", "Band not properly exported CW");
    QVERIFY2(adifForField->getADIFForMode (QString()) == QString(), "Empty Band not properly exported");
}

void tst_ADIFForField::test_getADIFForSubMode()
{
    QVERIFY2(adifForField->getADIFForSubMode ("USB") == "<SUBMODE:3>USB ", "Band not properly exported SSB");
    QVERIFY2(adifForField->getADIFForSubMode ("OLIVIA 4/125") == "<SUBMODE:12>OLIVIA 4/125 ", "Band not properly exported CW");
    QVERIFY2(adifForField->getADIFForSubMode (QString()) == QString(), "Empty Band not properly exported");
}
void tst_ADIFForField::test_getADIFForCQz()
{
    QVERIFY2(adifForField->getADIFForCQz ("14") == "<CQZ:2>14 ", "CQz not properly exported 14");
    QVERIFY2(adifForField->getADIFForCQz ("50") == QString(), "Bad CQz not properly exported 50");
    QVERIFY2(adifForField->getADIFForCQz ("CW") == QString(), "Bad CQ not properly exported CW");
    QVERIFY2(adifForField->getADIFForCQz (QString()) == QString(), "Empty CQ not properly exported");
}

void tst_ADIFForField::test_getADIFForITUz()
{
    QVERIFY2(adifForField->getADIFForITUz ("37") == "<ITUZ:2>37 ", "ITUz not properly exported 37");
    QVERIFY2(adifForField->getADIFForITUz ("97") == QString(), "Bad ITUz not properly exported 50");
    QVERIFY2(adifForField->getADIFForITUz ("CW") == QString(), "Bad String ITUz not properly exported CW");
    QVERIFY2(adifForField->getADIFForITUz (QString()) == QString(), "Empty ITUz not properly exported");
}
void tst_ADIFForField::test_getADIFForDXCC()
{
    QVERIFY2(adifForField->getADIFForDXCC ("37") == "<DXCC:2>37 ", "DXCC not properly exported 37");
    QVERIFY2(adifForField->getADIFForDXCC ("1234") == QString(), "Bad DXCC not properly exported 1234");
    QVERIFY2(adifForField->getADIFForDXCC ("CW") == QString(), "Bad String DXCC not properly exported CW");
    QVERIFY2(adifForField->getADIFForDXCC (QString()) == QString(), "Empty DXCC not properly exported");
}

void tst_ADIFForField::test_getADIFForAddress()
{
    QVERIFY2(adifForField->getADIFForAddress ("My address") == "<ADDRESS:10>My address ", "DXCC not properly exported 37");
    QVERIFY2(adifForField->getADIFForAddress (QString()) == QString(), "Empty ADDRESS not properly exported");
}

void tst_ADIFForField::test_getADIFForAge()
{
    QVERIFY2(adifForField->getADIFForAge ("37") == "<AGE:2>37 ", "Age not properly exported 37");
    QVERIFY2(adifForField->getADIFForAge ("500") == QString(), "Bad Age not properly exported 500");
    QVERIFY2(adifForField->getADIFForAge ("CW") == QString(), "Bad String Age not properly exported CW");
    QVERIFY2(adifForField->getADIFForAge (QString()) == QString(), "Empty Age not properly exported");
}

void tst_ADIFForField::test_getADIFForCNTY()
{
    QVERIFY2(adifForField->getADIFForCNTY ("AK,Aleutians East") == "<CNTY:17>AK,Aleutians East ", "CNTY not properly exported 37");
    QVERIFY2(adifForField->getADIFForCNTY (QString()) == QString(), "Empty CNTY not properly exported");
}

void tst_ADIFForField::test_getADIFForComment()
{
    QVERIFY2(adifForField->getADIFForComment ("My comment") == "<COMMENT:10>My comment ", "COMMENT not properly exported");
    QVERIFY2(adifForField->getADIFForComment (QString()) == QString(), "Empty COMMENT not properly exported");
}

void tst_ADIFForField::test_getADIFForA_Index()
{
    QVERIFY2(adifForField->getADIFForA_Index ("37") == "<A_INDEX:2>37 ", "A_Index not properly exported 37");
    QVERIFY2(adifForField->getADIFForA_Index ("500") == QString(), "Bad A_Index not properly exported 500");
    qDebug() << Q_FUNC_INFO << ": " << adifForField->getADIFForA_Index ("CW");
    QVERIFY2(adifForField->getADIFForA_Index ("CW") == QString(), "Bad String A_Index not properly exported CW");
    QVERIFY2(adifForField->getADIFForA_Index (QString()) == QString(), "Empty A_Index not properly exported");
}

void tst_ADIFForField::test_getADIFForAnt_az()
{
    QVERIFY2(adifForField->getADIFForAnt_az ("37") == "<ANT_AZ:2>37 ", "Ant_az not properly exported 37");
    //QVERIFY2(adifForField->getADIFForAnt_az ("500") == QString(), "Bad Ant_az not properly exported 500");
    QVERIFY2(adifForField->getADIFForAnt_az ("CW") == QString(), "Bad String Ant_az not properly exported CW");
    QVERIFY2(adifForField->getADIFForAnt_az (QString()) == QString(), "Empty Ant_az not properly exported");
}

void tst_ADIFForField::test_getADIFForAnt_el()
{
    QVERIFY2(adifForField->getADIFForAnt_el ("37") == "<ANT_EL:2>37 ", "Ant_el not properly exported 37");
    //QVERIFY2(adifForField->getADIFForAnt_el ("500") == QString(), "Bad Ant_el not properly exported 500");
    QVERIFY2(adifForField->getADIFForAnt_el ("CW") == QString(), "Bad String Ant_el not properly exported CW");
    QVERIFY2(adifForField->getADIFForAnt_el (QString()) == QString(), "Empty Ant_el not properly exported");
}
void tst_ADIFForField::test_getADIFForAnt_path()
{
    QVERIFY2(adifForField->getADIFForAnt_path ("G") == "<ANT_PATH:1>G ", "Ant_Path not properly exported G");
    QVERIFY2(adifForField->getADIFForAnt_path ("O") == "<ANT_PATH:1>O ", "Ant_Path not properly exported O");
    QVERIFY2(adifForField->getADIFForAnt_path ("S") == "<ANT_PATH:1>S ", "Ant_Path not properly exported S");
    QVERIFY2(adifForField->getADIFForAnt_path ("L") == "<ANT_PATH:1>L ", "Ant_Path not properly exported L");
    QVERIFY2(adifForField->getADIFForAnt_path ("T") == QString(), "Bad Ant_Path not properly exported T");
    QVERIFY2(adifForField->getADIFForAnt_path ("CW") == QString(), "Bad String Ant_Path not properly exported CW");
    QVERIFY2(adifForField->getADIFForAnt_path (QString()) == QString(), "Empty Ant_Path not properly exported");
}

void tst_ADIFForField::test_getADIFForARRL_sect()
{
    QVERIFY2(adifForField->getADIFForARRL_sect("AL") == "<ARRL_SECT:2>AL ", "ARRL_SECT not properly exported AL");
    QVERIFY2(adifForField->getADIFForAnt_path (QString()) == QString(), "Empty ARRL_SECT not properly exported");
}

void tst_ADIFForField::test_getADIFForGridSquare()
{
    qDebug() << Q_FUNC_INFO << ": " << adifForField->getADIFForGridSquare ("IN80");
    QVERIFY2(adifForField->getADIFForGridSquare ("IN80") == "<GRIDSQUARE:4>IN80 ", "GRIDSQUARE not properly exported IN80");
    QVERIFY2(adifForField->getADIFForGridSquare ("IN80AA") == "<GRIDSQUARE:6>IN80AA ", "GRIDSQUARE not properly exported IN80AA");
    QVERIFY2(adifForField->getADIFForGridSquare ("EEE") == QString(), "Bad GRIDSQUARE not properly exported IN80");
    QVERIFY2(adifForField->getADIFForGridSquare (QString()) == QString(), "Empty GRIDSQUARE not properly exported");
}

void tst_ADIFForField::test_getADIFForMyGridSquare()
{
    QVERIFY2(adifForField->getADIFForMyGridSquare ("IN80") == "<MY_GRIDSQUARE:4>IN80 ", "MY_GRIDSQUARE not properly exported IN80");

    QVERIFY2(adifForField->getADIFForMyGridSquare ("IN80AA") == "<MY_GRIDSQUARE:6>IN80AA ", "MY_GRIDSQUARE not properly exported IN80AA");
    QVERIFY2(adifForField->getADIFForMyGridSquare ("EEE") == QString(), "Bad MY_GRIDSQUARE not properly exported IN80");
    QVERIFY2(adifForField->getADIFForMyGridSquare (QString()) == QString(), "Empty MY_GRIDSQUARE not properly exported");
}

void tst_ADIFForField::test_getADIFForQSODateOff()
{
    qDebug() << adifForField->getADIFForQSODateOff ("2021-10-17 12:52:12");
    QVERIFY2(adifForField->getADIFForQSODateOff ("2021-10-17 12:52:12") == "<QSO_DATE_OFF:8>20211017 <TIME_OFF:6>125212 ", "Date not properly exported");
    QVERIFY2(adifForField->getADIFForQSODateOff ("2021-10-17 12:52:12", ModeEQSL) == "<QSO_DATE_OFF:8>20211017 <TIME_OFF:4>1252 ", "Date not properly exported - EM");
    QVERIFY2(adifForField->getADIFForQSODateOff ("BAD date") == QString(), "Bad Date_off not properly exported");
    QVERIFY2(adifForField->getADIFForQSODateOff ("BAD date", ModeEQSL) == QString(), "Bad Date_off not properly exported - EM");
}

void tst_ADIFForField::test_getADIFForFreq()
{
    QVERIFY2(adifForField->getADIFForFreq ("14") == "<FREQ:2>14 ", "FREQ not properly exported 14");
    QVERIFY2(adifForField->getADIFForFreq ("14.195") == "<FREQ:6>14.195 ", "FREQ not properly exported 14.195");
    QVERIFY2(adifForField->getADIFForFreq ("CW") == QString(), "Bad String FREQ not properly exported CW");
    QVERIFY2(adifForField->getADIFForFreq (QString()) == QString(), "Empty FREQ not properly exported");
}

void tst_ADIFForField::test_getADIFForFreq_rx()
{
    QVERIFY2(adifForField->getADIFForFreq_rx ("14") == "<FREQ_RX:2>14 ", "FREQ_RX not properly exported 14");
    QVERIFY2(adifForField->getADIFForFreq_rx ("14.195") == "<FREQ_RX:6>14.195 ", "FREQ_RX not properly exported 14.195");
    QVERIFY2(adifForField->getADIFForFreq_rx ("CW") == QString(), "Bad String FREQ_RX not properly exported CW");
    QVERIFY2(adifForField->getADIFForFreq_rx (QString()) == QString(), "Empty FREQ_RX not properly exported");
}

void tst_ADIFForField::test_getADIFForStationCallsign()
{
    QVERIFY2(adifForField->getADIFForStationCallsign ("EA4K") == "<STATION_CALLSIGN:4>EA4K ", "StationCallsign not properly exported");
    QVERIFY2(adifForField->getADIFForStationCallsign(QString()) == QString(), "Empty StationCallsign  not properly exported");
}

void tst_ADIFForField::test_getADIFForQSLRdate()
{
    qDebug() << Q_FUNC_INFO << ": " << adifForField->getADIFForQSLRDate ("2021-10-17");
    QVERIFY2(adifForField->getADIFForQSLRDate ("2021-10-17") == "<QSLRDATE:8>20211017 ", "Date not properly exported");
    QVERIFY2(adifForField->getADIFForQSLRDate ("BAD date") == QString(), "Bad QSLRDATE not properly exported");
    QVERIFY2(adifForField->getADIFForQSLRDate(QString()) == QString(), "Empty QSLRDATE  not properly exported");
}

void tst_ADIFForField::test_getADIFForQSLSDate()
{
    QVERIFY2(adifForField->getADIFForQSLSDate ("2021-10-17") == "<QSLSDATE:8>20211017 ", "Date not properly exported");
    QVERIFY2(adifForField->getADIFForQSLSDate ("BAD date") == QString(), "Bad QSLSDATE not properly exported");
    QVERIFY2(adifForField->getADIFForQSLSDate(QString()) == QString(), "Empty QSLSDATE  not properly exported");
}

void tst_ADIFForField::test_getADIFForQSLRcvd()
{
    QVERIFY2(adifForField->getADIFForQSLRcvd ("Y") == "<QSL_RCVD:1>Y ", "QSL_RCVD not properly exported Y");
    QVERIFY2(adifForField->getADIFForQSLRcvd ("N") == "<QSL_RCVD:1>N ", "QSL_RCVD not properly exported N");
    QVERIFY2(adifForField->getADIFForQSLRcvd ("R") == "<QSL_RCVD:1>R ", "QSL_RCVD not properly exported R");
    QVERIFY2(adifForField->getADIFForQSLRcvd ("I") == "<QSL_RCVD:1>I ", "QSL_RCVD not properly exported I");
    QVERIFY2(adifForField->getADIFForQSLRcvd ("V") == QString(), "Bad QSL_RCVD not properly exported V");
    QVERIFY2(adifForField->getADIFForQSLRcvd("H") == QString(), "Bad QSL_RCVD not properly exported H");
    QVERIFY2(adifForField->getADIFForQSLRcvd ("CW") == QString(), "Bad String QSL_RCVD not properly exported CW");
    QVERIFY2(adifForField->getADIFForQSLRcvd (QString()) == QString(), "Empty QSL_RCVD not properly exported");
}

void tst_ADIFForField::test_getADIFForQSLSent()
{
    QVERIFY2(adifForField->getADIFForQSLSent("Y") == "<QSL_SENT:1>Y ", "QSL_SENT not properly exported Y");
    QVERIFY2(adifForField->getADIFForQSLSent ("N") == "<QSL_SENT:1>N ", "QSL_SENT not properly exported N");
    QVERIFY2(adifForField->getADIFForQSLSent ("R") == "<QSL_SENT:1>R ", "QSL_SENT not properly exported R");
    QVERIFY2(adifForField->getADIFForQSLSent ("I") == "<QSL_SENT:1>I ", "QSL_SENT not properly exported I");
    QVERIFY2(adifForField->getADIFForQSLSent ("Q") == "<QSL_SENT:1>Q ", "QSL_SENT not properly exported Q");
    QVERIFY2(adifForField->getADIFForQSLSent("H") == QString(), "Bad QSL_SENT not properly exported H");
    QVERIFY2(adifForField->getADIFForQSLSent ("CW") == QString(), "Bad String QSL_SENT not properly exported CW");
    QVERIFY2(adifForField->getADIFForQSLSent (QString()) == QString(), "Empty QSL_SENT not properly exported");
}

QTEST_APPLESS_MAIN(tst_ADIFForField)

#include "tst_adifforfield.moc"
