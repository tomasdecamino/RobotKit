/* @author: Alex Roberto Vargas Benamburg
 * April 2016
 * www.funcostarica.org

Made for teaching poruposes www.funcostarica.org
Released under MIT License
Copyright (c) 2016  Alex Roberto Vargas Benamburg (vbalex.com)
 */
static const uint32_t REMOTE_1_KEYS[]={
  16724175, //1
  16718055, //2
  16743045, //3
  16716015, //4
  16726215, //5
  16734885, //6
  16728765, //7
  16730805, //8
  16732845, //9
  16738455, //0
  16769055, //minus
  16754775, //plus
  16750695, //plus100
  16756815, //plus200
  16720605, //prev
  16712445, //next
  16761405, //play
  4294967295 //hold
};
static const uint32_t REMOTE_2_KEYS[]={
  16580863, //1
  16613503, //2
  16597183, //3
  16589023, //4
  16621663, //5
  16605343, //6
  16584943, //7
  16617583, //8
  16601263, //9
  16625743, //0
  16619623, //down
  16615543, //up
  16593103, //asterisk
  16609423, //hashtag
  16591063, //left
  16607383, //right
  16623703, //ok
  4294967295 //hold
};
  #define REMOTE_NO_KEY 255
  #define REMOTE_1 0
  #define REMOTE_2 1
  #define REMOTE_3 2
  #define REMOTE_4 3
  #define REMOTE_5 4
  #define REMOTE_6 5
  #define REMOTE_7 6
  #define REMOTE_8 7
  #define REMOTE_9 8
  #define REMOTE_0 9

  #define REMOTE_MINUS 10
  #define REMOTE_DOWN 10
  #define REMOTE_PLUS 11
  #define REMOTE_UP 11

  #define REMOTE_PLUS100 12
  #define REMOTE_ASTERISK 12
  #define REMOTE_PLUS200 13
  #define REMOTE_HASTAG 13


  #define REMOTE_PREV 14
  #define REMOTE_LEFT 14
  #define REMOTE_NEXT 15
  #define REMOTE_RIGHT 15
  #define REMOTE_PLAY 16
  #define REMOTE_OK 16

  #define REMOTE_HOLD 17

  #define REMOTE_MAX 17

//Constants for Motor pin aassignments in S4A EDU controller
// http://www.crcibernetica.com/s4a-edu-robotic-controller/
#define LEFTDIR 10
#define RIGHTDIR 11
#define LEFTSPEED 5
#define RIGHTSPEED 6
