section "l04_m3_001"{
    int var0;
    int var1;
    if ((Parameter_GetCh1Param(3, 130) == 2) || (Parameter_GetCh1Param(3, 130) == 3)){
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0403000_C04200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... I will not accept this.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("L0403000_C04300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You've mistaken who you should give\nthis to.\nAnyway, it should not be me.\nExcuse me.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He can't accept it...)");
        }
    else {
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0403000_C04400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nEven though you are giving it to me,\nit is impossible for me to accept\nit.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("L0403000_C04500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I also have my pride.\nI do not want people to think that I\nwill accept chocolate from just\nanyone.");
        Character_BlinkStart(3, 0, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0403000_C04600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nYou understand what I am trying to\nsay, don't you?\nExcuse me.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ looked\nangry...)");
        }
    }
